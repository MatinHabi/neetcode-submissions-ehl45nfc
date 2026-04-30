class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //here we smashed kept smashing the smallest one with the next smallest
        //2 2 3 4 6
        //2 2 3 2
        //2 2 1
        //2 1
        //1

        //algo:
        //- min heap to store values
        //- smash next one with next smallest until theres only 1 stone left

        priority_queue<int> pq;
        int res = 0;
        for(int i : stones){
            pq.push(i);
        }
        while(pq.size() > 1){
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            if(x-y > 0){pq.push(x-y);}
        }
        if(pq.empty()) return 0;
        return pq.top();
    }
};
