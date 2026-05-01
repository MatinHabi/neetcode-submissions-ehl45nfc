class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        //2 4 5 3 1 2
        //0 1 2 3 4 5
        if(arr.size() == 1){return {-1};}
        priority_queue<pair<int, int>> pq; //stores: num, idx

        for(int i = 0 ; i < arr.size() ; i++){
            pq.push({arr[i],i});
        }
        vector<int> res(arr.size(), -1);
        int l = 0;
        while(!pq.empty()){
            auto curr = pq.top(); pq.pop();
            if(l > curr.second)continue;
            cout << curr.first << "," << curr.second << "\n";
            for(int i = l ; i < curr.second; i++){
                res[i] = curr.first;
            }
            l = curr.second;
        }
        return res;

    }
};