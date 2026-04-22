class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //largest rectange is either:
        //- the actual height
        //- the length pushed back + forth

        int width=0, height=0, a=0;
        int size = heights.size();
        stack<pair<int, int>> areas;
        int res = 0;
        for(int i = 0 ; i < size ; i++){
            int start = i;
            while(!areas.empty() && heights[i] < areas.top().first){
                auto old = areas.top();
                height= old.first;
                width= i - old.second;
                a = width * height;
                res = max(res, a);
                start = old.second;
                areas.pop();
            }
            res = max(heights[i], res);
            areas.push({heights[i], start});
        }

        while(!areas.empty()){
            auto old = areas.top();
            height = old.first;
            width = size - old.second;
            a = width*height;
            res = max(res, a);
            areas.pop();
        }
        return res;
    }
};
