class Solution {
public:
    vector<vector<int>> res;

    void dfs(vector<int>& nums, int i, vector<int> curr){
        if(i >= nums.size()){
            res.push_back(curr);
            return;
        }
        vector<int> old = curr;
        curr.push_back(nums[i]);
        dfs(nums, i+1, old);
        dfs(nums, i+1, curr);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        res = {};
        // algo:
        //binary decision to add or not add nums[i]
        //build the subset from the decision tree
        dfs(nums, 0 , {});
        return res;

    }
};
