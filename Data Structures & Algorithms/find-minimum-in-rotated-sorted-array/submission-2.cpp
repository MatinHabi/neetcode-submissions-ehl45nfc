class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size()-1;
        int res = nums[r];
        while(l<=r){
            int m = (l+(r-l)/2);
            if(nums[l] <= nums[r]){
                res = min(res,nums[l]);
                break;
            }
            if(nums[m]>=nums[l]){
                l=m+1;
                res = min(res,nums[l]);
            }else{
                r=m-1;
                res = min(res,nums[m]);
            }
            cout << res << " \n";
        }
        return res;
    }
};
