class Solution {
public:
    bool isPalindrome(string s) {
         string n = ""; //new string
    string b = ""; //backwards new string

    for(auto i : s){
        if(i == ' ') continue;
        if(i < 48 || i > 57 && i < 65 || i > 90 && i < 97 || i > 122) continue;
        char x = i;
        n += i;
    }

    for(int i = 0 ; i < n.size() ;i++){
        char x = n[i];
        if(x > 64 && x < 91){
            n[i] += 32;
        }
    }

    for(int i = n.size() - 1 ; i >= 0 ; i--){
        char t = n[i];
        b += t;
    }

    // cout << n << endl;
    // cout << b << endl;

    for(int i = 0 ; i < n.size() ; i++){
        // cout << n[i] << " , " << b[i] << endl;
        if(n[i] != b[i]){
            // cout << "NOT PALINDROME!\n";
            return false;
        }
    }
    // cout << "PALINDROME!\n";
    return true;
   
   }
};
