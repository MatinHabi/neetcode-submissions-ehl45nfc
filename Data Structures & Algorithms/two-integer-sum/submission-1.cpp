class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        for(int i = 0 ; i < nums.size() ; i++){
            int temp = target - nums[i];
            if(myMap.find(temp) != myMap.end()){
                return {myMap[temp],i};
            }
            myMap.insert({nums[i], i});
        }
        
    }
};
