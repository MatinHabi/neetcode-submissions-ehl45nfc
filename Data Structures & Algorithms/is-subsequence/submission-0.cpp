class Solution {
public:
    bool isSubsequence(string s, string t) {
        int idx = 0;
        int res = s.size();
        for(int i = 0 ; i < t.size() ; i++){
            if(t[i] == s[idx]){
                idx++;
                res--;
            }
        }
        return (res == 0);
    }
};