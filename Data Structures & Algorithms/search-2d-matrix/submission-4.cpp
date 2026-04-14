class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int l = 0, r = matrix.size()-1, c = (int)matrix[0].size();
        while(l<=r){
            int mid = l+(r-l)/2;
            if (matrix[mid][0] == target || matrix[mid][c - 1] == target) return true;
            if(matrix[mid][c-1] < target){
                l = mid+1;
            }else if (matrix[mid][0] > target){
                r = mid-1;
            }else {
                auto &tar = matrix[mid];
                int l1 = 0, r1 = c-1;
                while(l1 <= r1){
                    int mid1 = l1+(r1-l1)/2;
                    if(tar[mid1] < target){
                        l1 = mid1+1;
                    }else if(tar[mid1] > target){
                        r1 = mid1-1;
                    }else{
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
