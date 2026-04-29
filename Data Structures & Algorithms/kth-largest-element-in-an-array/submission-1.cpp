class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       int res = *max_element(nums.begin(), nums.end());
       for(int i= 1 ; i < k ; i++){
        for(int j = 0 ; j < nums.size() ; j++){
            if(nums[j] == res){
                nums[j] = -9999;
                break;
            }
        }
        res = *max_element(nums.begin(), nums.end());
       }
       return res;
    }
};
