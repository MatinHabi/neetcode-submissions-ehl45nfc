class Solution {
    int maxelem(vector<int>& a){
        int ret = -1;
        for(int i : a){
            if(i > ret){
                ret = i;
            }
        }
        return ret;
    }
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        int l = 0;
        vector<int>f(26,0);
        for(int r = 0 ; r < s.size() ; r++){
            f[s[r]-'A']+=1;
            int most = maxelem(f); 
            while((r-l)+1 - most > k){
                f[s[l]-'A']--;
                l++;
            }
            res = max(res, (r-l)+1);
        }
        return res;

    }
};
