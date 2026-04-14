class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>myDataSet;
        for(int i = 0 ; i < nums.size() ; i++){
            if(myDataSet.count(nums[i])) return true;
            myDataSet.insert(nums[i]);
        }
        return false;
    }
};