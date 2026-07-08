class Solution {
public:
    unordered_set<int> dict;
    vector<vector<int>> res;

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        for(int &i: nums){
            dict.insert(i);
        }
        res = {};
        dfs({}, nums, 0, target, 0);
        return res;
    }

    void dfs(vector<int> curr, vector<int>& nums, int sum, int target, int i){
        if(sum > target || i == nums.size()){
            return;
        }
        if(sum == target){
            res.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        dfs(curr, nums, sum+nums[i], target, i);
        //dfs(curr, nums, sum+nums[i], target, i+1);

        curr.pop_back();
        dfs(curr, nums, sum, target, i+1);
    }
};
