class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26] = {0};
        for(char& i : magazine){
            arr[i-'a']++;
        }
        for(char& i : ransomNote){
            arr[i-'a']--;
        }
        for(int& i : arr){
            if(i < 0){
                return false;
            }
        }
        return true;
    }
};