class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //a permutation must only contain the letters in s1 to the correct amount
        //store the letters and look for them from a position when the first letter in s1 shows up
        //reset the count if it isnt there
        vector<int> abc(27,0);
        for(char& c: s1){
            abc[c-'a']++;
        }
        for(int i = 0 ; i < s2.size() ; i++){
            if(abc[s2[i] - 'a'] > 0 && i+s1.size() <= s2.size()){
                auto t = abc;
                for(int j = i ; j < i+s1.size() ; j++){
                    t[s2[j] - 'a']--;
                }
                bool flag = false;
                for(int& i : t){
                    if(i!=0){
                        flag = true;
                    }
                }
                if(!flag){return true;}
            }
        }
        return false; 
    }
};
