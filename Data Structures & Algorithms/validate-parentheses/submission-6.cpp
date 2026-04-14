class Solution {
public:
    bool isValid(string s) {
        stack<char>open;
        for(char c : s){
            if(c == '{' || c == '(' || c == '['){
                open.push(c);
            }
            if(!open.empty()){
                if(c == '}'){
                    if(open.top() == '{'){
                        open.pop();
                    }else{
                        return false;
                    }
                }
                else if(c == ')'){
                    if(open.top() == '('){
                        open.pop();
                    }else{
                        return false;
                    }
                }
                else if(c == ']'){
                    if(open.top() == '['){
                        open.pop();
                    }else{
                        return false;
                    }
                }
            }else{
                return false;
            }
        }
        if(!open.empty())return false;

        return true;
    }
};
