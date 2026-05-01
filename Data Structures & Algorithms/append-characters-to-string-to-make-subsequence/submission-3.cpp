class Solution {
public:
    int appendCharacters(string s, string t) {
       int res = t.size();
       int idx = 0;
       for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == t[idx]){
            res--;
            idx++;
        }
       }
       return res;
       
    }
};