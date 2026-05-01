class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int s = nums.size();
        nums.resize(2*nums.size());
        for(int i = s ; i < nums.size() ; i++ ){
            nums[i] = nums[i-s];
        }
        return nums;
    }
};