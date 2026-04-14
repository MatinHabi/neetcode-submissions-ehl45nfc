class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(n),suff(n),pref(n);

        //1 2 3 4
        //

        suff[0] = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            suff[i] = suff[i-1] * nums[i-1];
        }

        pref[n-1] = 1;
        for(int i = n - 2 ; i >= 0 ; i-- ){
            pref[i] = pref[i+1] * nums[i+1];
        }

        for(int i = 0 ; i < n ; i++){
            result[i] = suff[i]*pref[i];
        }

        return result;
    }
};
