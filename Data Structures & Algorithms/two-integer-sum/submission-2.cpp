class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> myMap;
        for(int i = 0 ; i < nums.size() ; i++){
            int j = target - nums[i];
            if(myMap.find(j) != myMap.end()){
                return {myMap[j],i};
            }else{
                myMap.insert({nums[i],i});
            }
        }

    }
};
