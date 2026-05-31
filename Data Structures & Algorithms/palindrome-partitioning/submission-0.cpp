class Solution {
public:
    vector<vector<string>> res;
    void dfs(string& s, int i, int j, vector<string>& part){
        if(i>=s.size()){
            if(i==j){
                res.push_back(part);
            }
            return;
        }
        if(palindromeCheck(s,j,i)){
            part.push_back(s.substr(j,i-j+1));
            dfs(s,i+1,i+1,part);
            part.pop_back();
        }
        dfs(s,i+1,j,part);
        return;
    }
    vector<vector<string>> partition(string s) {
        res={};
        vector<string> part;
        dfs(s,0,0,part);
        return res;

    }
    bool palindromeCheck(string s,int l, int r){
       while(l<r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
       }
       return true;
    }
};
