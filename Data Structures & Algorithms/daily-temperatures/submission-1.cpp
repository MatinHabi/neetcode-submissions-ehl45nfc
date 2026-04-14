class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        auto &t = temperatures;
        stack<pair<int,int>> temps = {};
        vector<int> res(t.size(), 0);
        for(int i = 0 ; i < t.size(); i++){
            while(!temps.empty() && t[i] > temps.top().first){
                res[temps.top().second] =  i - temps.top().second;
                temps.pop();
            }
            temps.push({t[i], i});
        }
        return res;
    }
};
