class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       vector<vector<int>> r(board.size(), vector<int>(10,0)), c(board.size(), vector<int>(10,0));

       int rstart = 0, cstart = 0, rend = 3, cend = 3;

       for(int rbox = 0 ; rbox < 3 ; rbox++){
            for(int cbox = 0 ; cbox < 3 ; cbox++){
                vector<int> nums(10, 0);
                for(int row = rstart; row < rend ; row++){
                    for(int col = cstart; col < cend ; col++){
                        if(board[row][col] == '.')continue;
                        int d = board[row][col] - '0';
                        if(nums[d] >= 1 || r[row][d] >= 1 || c[col][d] >= 1){
                            return false;
                        }
                        nums[d]+=1; r[row][d] +=1; c[col][d] +=1;
                    }
                }
                cstart = cend; cend +=3;
            }
            rstart = rend; rend +=3;
            cstart = 0; cend = 3;
        }
       return true;
    }
};
