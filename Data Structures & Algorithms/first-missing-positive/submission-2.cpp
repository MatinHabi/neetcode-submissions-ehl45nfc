class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] < 0 ) nums[i] = 0;
        }
        // {3,7,8,10,11} res = 1;

        int smallest = 200000;
        set<int> mySet;
        for(int i : nums){
            mySet.insert(i);
        }

        if(nums[0] > 1) return 1;
            
        for(int i = 0 ; i < nums.size() ; i++){
            if(mySet.find(nums[i]+1) == mySet.end() && nums[i] < smallest){
                smallest = nums[i];
            }
        }
        return smallest+1;

    }
};