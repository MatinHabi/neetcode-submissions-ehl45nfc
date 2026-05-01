class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        bool seen = false;
        for(int i = s.size()-1 ; i >= 0 ; i--){
            if(s[i]!=' '){
                if(!seen){seen = true;}
                res++;
            }
            if(s[i] == ' ' && seen){
                break;
            }
        }
        return res;

    }
};