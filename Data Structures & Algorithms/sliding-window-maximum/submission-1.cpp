class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ret;
        for(int i = 0; i+k <= nums.size() ; i++){
            int high = INT_MIN;
            for(int j = i ; j < i+k ; j++){
                high = max(high, nums[j]);
            }
            ret.push_back(high);
        }
        return ret;
    }
};
