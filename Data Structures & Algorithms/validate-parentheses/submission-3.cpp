class Solution {
public:
    bool isValid(string s) {
        stack<char> open;

        for(char i : s){
            if(i == '(' || i == '{' || i == '['){
                open.push(i);
            }
            if(i == ')'){
                if(!open.empty() && open.top() == '('){
                    open.pop();
                }else{
                    return false;
                }
            }else if (i == '}'){
                if(!open.empty() && open.top() == '{'){
                    open.pop();
                }else{
                    return false;
                }
            }else if (i== ']'){
                 if(!open.empty() && open.top() == '['){
                    open.pop();
                }else{
                    return false;
                }
            }
        }
        if(!open.empty()){return false;}
        return true;

    }
};
