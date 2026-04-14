class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int l = 0, r = (int)matrix.size() - 1;
        int c = (int)matrix[0].size();

        while (l <= r) {
            int mid = l + (r - l) / 2;

            // fast checks for equality on row boundaries
            if (matrix[mid][0] == target || matrix[mid][c - 1] == target) return true;

            if (matrix[mid][c - 1] < target) {
                l = mid + 1;               // target must be in a later row
            } else if (matrix[mid][0] > target) {
                r = mid - 1;               // target must be in an earlier row
            } else {
                // target is within this row's range -> binary search the row
                auto &rowRef = matrix[mid];
                int l1 = 0, r1 = c - 1;
                while (l1 <= r1) {
                    int mid1 = l1 + (r1 - l1) / 2;
                    if (rowRef[mid1] < target) l1 = mid1 + 1;
                    else if (rowRef[mid1] > target) r1 = mid1 - 1;
                    else return true;
                }
                return false; // inside the row's range but not found
            }
        }
        return false;
    }
};