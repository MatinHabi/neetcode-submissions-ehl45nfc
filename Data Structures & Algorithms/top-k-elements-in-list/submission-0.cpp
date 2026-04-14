class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> myMap; 
        // storing the freq and num
        for(int i = 0 ; i < nums.size() ; i++){
            if(myMap.find(nums[i]) != myMap.end()){
                myMap[nums[i]] += 1;
            }else{
                myMap[nums[i]] = 1;
            }
        }
        vector<int> result;
        int max;
        for(int i = 0 ; i < k ; i++){
            int bestKey, bestFreq = -1;
            for(auto j = myMap.begin() ; j != myMap.end() ; j++){
                if(j->second > bestFreq){
                    bestFreq = j->second;
                    bestKey = j->first;
                }
            }
            result.push_back(bestKey);
            myMap.erase(bestKey);
        }
        return result;
    }
};
