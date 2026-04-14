class Solution {
public:

    string encode(vector<string>& strs) {
        string temp = "";
        for(int i = 0 ; i < strs.size() ; i++){
            temp += strs[i] + ".";
        }
        return temp;
    }

    vector<string> decode(string s) {
        vector<string> temp;
        int start= 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '.'){
                temp.push_back(s.substr(start,i-start));
                start = i+1;
            }
        }
        return temp;
    }
};
