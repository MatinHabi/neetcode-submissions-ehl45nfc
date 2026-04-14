class Solution {
public:
    int maxArea(vector<int>& heights) {
        //min height * length = water 
        //return max water
        //length = largerIndx - smallINDX
        int n = heights.size();
        int max = -1;
        for(int i = 0 ; i < n ; i++){
            int side1 = heights[i];
            for(int j = i ; j < n ;j++){
                int side2 = heights[j];
                int length = (j - i);
                int water = min(side1, side2)*length;
                if(water >= max){max = water;}
            }
        }
        return max;
    }
};
