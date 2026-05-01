class Solution {
public:
    vector<int> cache;
    int dfs(int curr, int goal){
        if(curr >= goal){
            return curr == goal;
        }
        if(cache[curr] != -1){
            return cache[curr];
        }
        return cache[curr] = dfs(curr+1, goal) + dfs(curr+2, goal);
    }
    int climbStairs(int n) {
        cache.resize(n,-1);
        return dfs(0,n);
    }
};
