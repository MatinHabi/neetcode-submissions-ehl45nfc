class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //given an array find nums a + b = target && a < b
        unordered_map<int, int> myMap;
        for(int i = 0 ; i < numbers.size() ; i++){
            int num1 = target - numbers[i];
            if(myMap.find(num1) != myMap.end()){
                return ((myMap[num1] < i+1)? vector<int>{myMap[num1], i+1} : vector<int>{i+1, myMap[num1]});
            }
            myMap.insert({numbers[i], i+1});
        }
    }
};
