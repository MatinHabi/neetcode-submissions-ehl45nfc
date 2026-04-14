class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size() <= 1) return;
        char temp;
        int j = s.size()-1;
        for(int i = 0 ; i < s.size()/2 ; i++){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            j--;
        }
        cout << endl;
    }
};