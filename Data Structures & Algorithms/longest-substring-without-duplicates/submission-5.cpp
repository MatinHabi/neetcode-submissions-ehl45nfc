class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        int l = 0;
        unordered_set<char> seen;
        for(int r = 0 ; r < s.size() ; r++){
            while(seen.find(s[r]) != seen.end()){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            length = max(length, r-l+1);
        }
        return length;
    }
};