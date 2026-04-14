class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>f1,f2;
        for(char i : t){
            f1[i]++;
        }
        int need = f1.size(), have = 0; pair<int,int>bestPair{-1,-1};
        int l = 0; int res = INT_MAX;

        for(int r = 0 ; r < s.size() ; r++){
            char c = s[r];
            f2[c]++;
            if(f1.count(c) && f2[c] == f1[c]){
                have++;
            }

            while(have == need){
                if((r-l)+1 < res){
                    res = (r-l)+1;
                    bestPair = {l,r};
                }
                f2[s[l]]--;
                if(f1.count(s[l]) && f2[s[l]] < f1[s[l]]){
                    have--;
                }
                l++;
            }
        }
        return res == INT_MAX ? "" : s.substr(bestPair.first, res);
    }
};
