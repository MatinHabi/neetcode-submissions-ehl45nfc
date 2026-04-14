class Solution {
public:

    string encode(vector<string>& strs) {
        string temp = "";
        for(int i = 0 ; i < strs.size() ; i++){
            temp += "." + to_string(strs[i].length()) + "#" + strs[i];
        }
        //cout << temp << endl;
        return temp;
    }

    vector<string> decode(string s){
        vector<string>decode;
        int start;
        int end;
        string num = "";
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '.'){
                if(i < 1) 
                    start = 1;
                else
                    start = i+1;
            }
            if(isdigit(s[i]) && s[i] != '#'){
                num += s[i];
            }
            if(isdigit(s[i-1]) && s[i] == '#'){
                end = i;
                int length = end - start;
                num = s.substr(start, length);
                //cout << num << " ";
                decode.push_back(s.substr(i+1, stoi(num)));
                num = "";
            }
        }
        return decode;
    }
};
