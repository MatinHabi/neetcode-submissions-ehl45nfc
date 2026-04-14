class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> myMap;
        for(auto i : nums){
            myMap[i]++; 
        }
        priority_queue<pair<int,int>> q;
        //must add the number in based on its priority
        for(auto i : myMap){
            q.push({i.second, i.first});
        }

        vector<int> res;
        for(int i = 0 ; i < k ; i++){
            auto popped = q.top();
            q.pop();
            res.push_back(popped.second);
        }
        return res;
    }
};
