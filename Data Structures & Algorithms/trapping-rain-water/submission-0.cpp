class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxL(height.size(), 0), maxR(height.size(),0);

        int max = -1, n = height.size();
        for(int i = 1 ; i < n ; i ++){
            if(height[i-1] > max){max = height[i-1];}
            maxL[i] = max;
        }
        max = -1;
        for(int i = n-2 ; i >= 0  ; i --){
            if(height[i+1] > max){max = height[i+1];}
            maxR[i] = max;
        }

        int total = 0;
        for(int i = 0 ; i < n ; i++){
            int water = std::min(maxL[i], maxR[i]) - height[i];
            if(water > 0){total+=water;}
        }

        
        return total; 
    }
};
