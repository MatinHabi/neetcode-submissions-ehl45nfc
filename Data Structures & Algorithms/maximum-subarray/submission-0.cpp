class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0], sum = 0;
        for(int i : nums){
            if(sum < 0){
                sum = 0;
            }
            sum += i;
            maxSub = max(maxSub, sum);
        }
        return maxSub;
    }
};
