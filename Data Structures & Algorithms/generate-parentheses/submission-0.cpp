class Solution {
public:
    vector<string> res;
    void dfs(int n, int open, int close, string curr){
        //if open > close can add close
        //if n == 0 then the set is reached
        // n == open == close
        if(n == open && n == close){
            res.push_back(curr);
            return;
        }
        if(open < n && open >= close){
            curr += '(';
            dfs(n, open+1, close, curr);
            curr.pop_back();
        }
        if(close < n && open > close ){
            curr += ')';
            dfs(n,open, close+1, curr);
            curr.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        res = {};
        dfs(n,0,0,"");
        return res;
    }
};
