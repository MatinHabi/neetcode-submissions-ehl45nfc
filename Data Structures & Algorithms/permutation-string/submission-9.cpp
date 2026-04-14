class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> f1(26,0);
        for(char i : s1){
            f1[i - 'a']++;
        }
        int n = s1.size();
        for(int i = 0 ; i+n <= s2.size() ; i++){
            vector<int>f2(26,0);
            for(int j = i ; j < i+n ; j++){
                f2[s2[j] - 'a']++;
            }
            if(f1 == f2){return true;}
        }
        return false;

    }
};
