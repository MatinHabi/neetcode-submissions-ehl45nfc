class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<bool> seen(n, false);

        for(int i : nums){
            if(i > 0  && i <= n){
                seen[i - 1] = true;   
            }
        }

        for(int i = 0 ; i < n ; i++){
            if(!seen[i]) return i+1;
        }

        return n+1;
    }
};