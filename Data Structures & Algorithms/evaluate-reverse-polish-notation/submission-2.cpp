class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> result;
        int num1, num2;
        for(string& c : tokens){
            if(c == "+" || c == "-" || c == "*" || c == "/" && !result.empty()){
                num2 = result.top(); result.pop();
                num1 = result.top(); result.pop();
                if(c == "+"){
                    result.push(num1 + num2);
                }else if(c == "-"){
                    result.push(num1 - num2);
                }else if(c == "*"){
                    result.push(num1 * num2);
                }else if(c == "/"){
                    result.push(num1 / num2);
                }
            }else if(c == "+" || c == "-" || c == "*" || c == "/" && result.empty()){
                return -1;
            }else{
                result.push(stoi(c));
            }
        }
        if(result.empty()){
            return -2;
        }
        return result.top();
    }
};
