class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //algo:
        //BS in whole tree first + Binary search spescific row
        //l = 0th row, r = lastrow
        //m = mid
        //if m < row[i][l_elem] --> its in that row if not its in the next row

        int l=0, r=matrix.size()-1, m = 0;
        while(l<=r){
            m = (l+(r-l)/2);
            if(matrix[m][matrix[m].size()-1]>=target){
                if(matrix[m][0]<=target){
                    return binarySearch(matrix[m],0,matrix[m].size()-1, target);
                }
                r=m-1;
            }else{
                l=m+1;
            }
        }
        return false;
    }
    bool binarySearch(vector<int> arr, int l, int r, int t){
        while(l<=r){
            int m = (l+(r-l)/2);
            if(arr[m]==t){
                return true;
            }
            if(arr[m]>t){
                r=m-1;
            }else{
                l=m+1;
            }
        }
        return false;
    }
};
