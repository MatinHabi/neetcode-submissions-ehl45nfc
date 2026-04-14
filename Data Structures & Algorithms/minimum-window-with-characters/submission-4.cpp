class Solution {
public:
    string minWindow(string s, string t) {
        string ret = "";
        unordered_map<char, int> f1;
        for(char i : t){
            f1[i]++;
        }
        int need = f1.size();
        for(int i = 0 ; i < s.size() ; i++){
            auto f2 = f1;
            int curr = 0;
            if(f1.find(s[i]) != f1.end()){
                string temp = "";
                for(int j = i ; j < s.size() ; j++){
                    temp += s[j];
                    if(f2.find(s[j]) != f2.end()){
                        f2[s[j]]-=1;
                        if(f2[s[j]] == 0){
                            curr++;
                        }
                    }
                    if(curr == need){
                        if(ret != ""){
                            ret = temp.size() <= ret.size() ? temp : ret;
                        }else{
                            ret = temp;
                        }
                    }
                }
            }
        }
        return ret;

    }
};

/*
test:

Input: s = "OUZODYXAAAAAAAAYXQZV", t = "XYZ"
Output: "YXQZ"


we are looking for the shortest substring in s which contains t and returning it

algo

- have a freq map of the t
- have a sliding window on s which starts at the first letter that occurs in t
- we need to constantly check if all of the freq in freq map of t = 0 (stopping condition)
- if the same letter is seen twice outside of the freq it becomes the new start pos
- it either stops when all letters are found or it reaches the end of s in
  which case it returns ""
*/
