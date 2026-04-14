class Solution {
public:
    int scoreOfString(string s) {
        int sum= 0;
        int c1 = 0, c2 = 1;

        while(c2 != s.size()){
            sum += abs(static_cast<int>(s[c1]) - static_cast<int>(s[c2]));
            c1++;c2++;
        }
        
        return sum;
    }
    /*
        code = |c-o| + |d-o| + |e-o|
    
    */
};