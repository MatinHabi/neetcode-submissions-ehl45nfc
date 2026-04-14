class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //return a vector of vectors(sum of elements in this one == 0)
        // sorted = {-4, -1 , -1 , 0 , 1 , 2}
        int sum = 0;
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() ; i++){
            int n1 = nums[i];
            for(int j = i+1 ; j < nums.size() ; j++){
                int n2 = nums[j];
                for(int k = j+1 ; k < nums.size() ; k++){
                    int n3 = nums[k];
                    if(n1 + n2 + n3 == 0){
                        res.insert(vector<int>{n1,n2,n3});
                    }
                }
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};
