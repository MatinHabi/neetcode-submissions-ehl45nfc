class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> areas;
        int res = 0;
        int size = heights.size();
        int width = 0, height = 0, a = 0;

        for (int i = 0; i < size; i++) {
            int start = i; // FIX: track start index of current bar
            cout << "res : " << res << " || ";
            while (!areas.empty() && heights[i] < areas.top().first) {
                start = areas.top().second; // FIX: inherit start from popped bar
                width = i - start;
                height = areas.top().first;
                a = height * width;
                cout << height << " x " << width << " = " << a << " ";
                res = a > res ? a : res;
                cout << " popping: {" << areas.top().first << "," << areas.top().second << "}\n";
                areas.pop();
            }
            cout << "pushing: {" << heights[i] << "," << start << "}\n";
            areas.push({heights[i], start}); // FIX: use start, not i-popCount
            res = heights[i] > res ? heights[i] : res;
        }

        while (!areas.empty()) {
            cout << "!areas.empty:\n";
            cout << "res : " << res << " || ";
            width = size - areas.top().second;
            height = areas.top().first;
            a = height * width; // FIX: calculate before printing
            cout << height << " x " << width << " = " << a << " \n";
            res = a > res ? a : res;
            areas.pop();
        }
        return res;
    }
};