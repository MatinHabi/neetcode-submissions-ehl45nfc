class Solution {
private:
    int helper(int l, int r, vector<int>& nums, int target){
        if(l > r) return -1;
        int m = l + (r-l)/2;

        if(nums[m] == target) return m;
        return ((target > nums[m])? helper(m+1, r, nums, target): helper(l, m-1, nums, target));
    }
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        return helper(l, r, nums, target);
    }
};