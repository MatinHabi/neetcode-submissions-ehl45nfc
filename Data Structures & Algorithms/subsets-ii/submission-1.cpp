class Solution {
public:
    vector<vector<int>> res;

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        foo(nums,{},0);
        return res;
    }
    void foo(vector<int>& nums, vector<int> curr, int i){
        if(i >= nums.size()){
            res.push_back(curr);
            return;
        }
        //all subsets WITH nums[i]
        curr.push_back(nums[i]);
        foo(nums, curr, i+1);

        //all subsets WITHOUT nums[i]
        curr.pop_back();
        int temp = nums[i];
        while(i < nums.size() && nums[i] == temp){
            i+=1;
        }
        foo(nums, curr, i);
        return;
    }
};
