class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)return 0;
        unordered_set<int> freq(nums.begin(), nums.end());
        int streak = 0;
        for(int n : freq){
           if(freq.find(n - 1) == freq.end()){
            int curr = 1;
            while(freq.find(n+curr) != freq.end()){
                curr++;
            }
            streak = max(streak, curr);
           }
        }
        return streak;
    }
};
