class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while(l<=r){
            int m = (r-l)+l/2;
            if(nums[m] < target){
                l+=1;
            }else if(nums[m] > target){
                r -= 1;
            }else if(nums[m] == target){
                return m;
            }
        }
        return -1;
    }
};
