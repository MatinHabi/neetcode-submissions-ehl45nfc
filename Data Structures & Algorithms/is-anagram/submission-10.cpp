class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        for(char& i : s){
            arr[i-'a']++;
        }
        for(char& i : t){
            arr[i-'a']--;
        }
        for(int& i : arr){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
};
