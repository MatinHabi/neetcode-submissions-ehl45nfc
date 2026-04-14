class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>total;
        for(string i : tokens){
            if(i == "+" || i == "-" || i == "/" || i == "*" && !total.empty()){
                int s = total.top(); total.pop();
                int f = total.top(); total.pop();
                //cout << "doing: " << f << i << s << "\n";
                if(i == "+"){
                    total.push(f+s);
                }else if(i == "-"){
                    total.push(f-s);
                }else if(i == "*"){
                    total.push(f*s);
                }else if(i == "/"){
                    total.push(f/s);
                }
            }else{
                total.push(stoi(i));
            }
        }
        if(total.empty())return 0;
        return total.top();
    }
};
