class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       //unordered_map storing int array and string
       unordered_map<string, vector<string>> myMap;
       for(int i = 0 ; i < strs.size() ; i++){
            int arr[26] = {0};
            for(int j = 0 ; j < strs[i].length() ; j++){
                arr[strs[i][j] -  'a']++;
            }
            string temp = "";
            for(int i = 0 ; i < 26 ; i++){
                temp += to_string(arr[i]) + " ";
            }
            myMap[temp].push_back(strs[i]);
       }
       vector<vector<string>> result;
       result.reserve(myMap.size());
       for(auto &s : myMap){
        vector<string> &group = s.second;
        result.push_back(move(group));
       }
       return result;
    }
};
