class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 , r = nums.size()-1;
        while(l<r){
            int m =(r+l)/2;
            if(nums[m]>nums[r]){
                l=m+1;
            }else{
                r=m;
            }
        }
        int p = l;
        int t = target;

        return (bs(nums,0,p-1,t) != -1 ? bs(nums,0,p-1,t):bs(nums,p,nums.size()-1,t));


    }

    int bs(vector<int>& v, int l, int r, int t){
        while(l<=r){
            int m = (l+r)/2;
            if(v[m] == t){
                return m;
            }
            else if(v[m]<t){
                l=m+1;
            }else{
                r=m-1;
            }
        }
        return -1;
    }
};
