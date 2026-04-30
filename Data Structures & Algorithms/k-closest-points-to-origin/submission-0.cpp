class Solution {
public:
    double distance(const vector<int>& a, const vector<int>& b = {0,0}){
        return (double)sqrt(pow((a[0] - b[0]),2) + pow((a[1] - b[1]),2));
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int>>>, greater<pair<double, vector<int>>>> pq;
        for(vector<int> i : points){
            double d = distance(i);
            pq.push({d,i});
        }
        vector<vector<int>> res(k);
        for(int i = 0 ; i < k ; i++){
            res[i] = pq.top().second;
            pq.pop();
        }
        return res;
    }
};
