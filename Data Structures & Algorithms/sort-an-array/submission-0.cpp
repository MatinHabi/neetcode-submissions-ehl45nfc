class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>, greater<int>>pq;
        vector<int>res(nums.size());
        for(int& i : nums){
            pq.push(i);
        }
        int i = 0;
        while(!pq.empty()){
            res[i] = pq.top();
            pq.pop();
            i++;
        }
        return res;
    }
};