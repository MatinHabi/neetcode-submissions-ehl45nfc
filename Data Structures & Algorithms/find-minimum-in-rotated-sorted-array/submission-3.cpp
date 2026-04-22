class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size()-1;
        int res = *max_element(nums.begin(),nums.end()); 
        while(l<=r){
            int m = (l+(r-l)/2);
            if(nums[m] >= nums[l]){
                res = min(nums[l], res);
                l=m+1;
            }else{
                res = min(nums[m], res);
                r=m-1;
            }
        }
        return res;
    }
};
