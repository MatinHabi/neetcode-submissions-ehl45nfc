class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        //algo:
        //max heap + queue
        //max heap with the count of all chars
        //queue<pair> with val + time+n
        //keep adding it back 
        //do until heap is empty

        priority_queue<int> maxheap;
        int arr[25] = {0};
        for(char& i : tasks){
            arr[i - 'A']++;
        }
        for(int& i : arr){
            if(i > 0){
                cout << "pushing: " << i << "\n";
                maxheap.push(i);
            }
        }

        queue<pair<int, int>> toDo;
        int t = 0;
        while(!maxheap.empty() || !toDo.empty()){
            while(!toDo.empty() && t >= toDo.front().second){
                //cout << "pushing to maxheap - " << toDo.front().first << "\n";
                maxheap.push(toDo.front().first);
                toDo.pop();
            }
            if(!maxheap.empty()){
                int top = maxheap.top(); maxheap.pop();
                top -= 1;
                t += 1;
                //cout << "top: " << top << " - added to toDo\n"; 
                if(top > 0){
                    toDo.push({top, t+n});
                }
                //cout << "time: " << t << "- not idle\n";
            }else{
                t+=1;
                //cout << "time: " << t << " - idle\n"; 
            }
        }
        return t;
    }
};
