class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //push 30 onto stack
        //see 38, 38 > 30, step = 1
        stack<pair<int, int>> waiting;
        vector<int> ret(temperatures.size(), 0);
        int s = temperatures.size();
        for(int i = 0 ; i < s ; i++){
            while(!waiting.empty() && temperatures[i] > waiting.top().first){
                ret[waiting.top().second] = i - waiting.top().second;
                waiting.pop();
            }
            waiting.push({temperatures[i], i});
        }
        return ret;
    }
};
