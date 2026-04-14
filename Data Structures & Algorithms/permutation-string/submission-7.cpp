class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> f1(26,0);
        int need = 0;
        for(char i : s1){
            f1[i - 'a']++;
            need++;
        }

        for(int i = 0 ; i < s2.size() ; i++){
            vector<int>f2(26,0);
            int curr = 0;
            for(int j = i ; j < s2.size() ; j++){
                f2[s2[j] - 'a']+=1;

                if(f1[s2[j] - 'a'] < f2[s2[j] - 'a']){
                    break;
                }

                if(f1[s2[j] - 'a'] == f2[s2[j] - 'a']){
                    curr += f1[s2[j] - 'a'];
                }

            }
            if(curr == need){return true;}
        }
        
        return false;

    }
};
