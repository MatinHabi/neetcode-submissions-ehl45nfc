class Solution {
public:
    vector<vector<int>> res;
    void dfs(vector<int>& nums, int i, int sum, int target, vector<int> curr){
        if(sum == target){
            res.push_back(curr);
            return;
        }
        if(i >= nums.size() || sum > target){
            return;
        }
        //add
        curr.push_back(nums[i]);
        dfs(nums,i+1,sum+nums[i],target,curr);

        //dont add
        curr.pop_back();
        while(i < nums.size() && nums[i] == nums[i+1]){
            i += 1;
        }
        dfs(nums,i+1,sum,target,curr);
        return;
    
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        res = {};
        sort(candidates.begin(), candidates.end());
        dfs(candidates, 0, 0, target, {});
        return res;
    }
};
