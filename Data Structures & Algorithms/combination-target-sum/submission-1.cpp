class Solution {
public:
    vector<vector<int>> res;
    set<vector<int>> seen;
    void dfs(vector<int>& nums, int i, int sum, int target,vector<int> curr){
        if( i>=nums.size() || sum > target){
            return;
        }
        if(sum == target && !seen.count(curr)){
            res.push_back(curr);
            seen.insert(curr);
            return;
        }
        vector<int> old = curr;
        curr.push_back(nums[i]);
        //add
        dfs(nums,i+1,sum+nums[i],target,curr);
        //stay
        dfs(nums,i,sum+nums[i],target,curr);
        //dont add
        dfs(nums,i+1,sum,target,old);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        res = {};
        dfs(nums, 0, 0, target, {});
        return res;
    }
};
