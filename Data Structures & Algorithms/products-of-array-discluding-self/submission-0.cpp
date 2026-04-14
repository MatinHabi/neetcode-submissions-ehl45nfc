class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix, suffix, result;
            for(int i = 0 ; i < nums.size() ; i++){
                int prod = 1;
                for(int j = 0 ; j < i ; j++){
                    prod *= nums[j];
                }
                prefix.push_back(prod);
                prod = 1;
                for(int j = nums.size() - 1 ; j > i ; j--){
                    prod *= nums[j];
                }
                suffix.push_back(prod);
                prod = 1;
            }
            for(int i = 0 ; i < nums.size() ;i++){
                result.push_back(prefix[i]*suffix[i]);
            }

    return result;
    }
};
