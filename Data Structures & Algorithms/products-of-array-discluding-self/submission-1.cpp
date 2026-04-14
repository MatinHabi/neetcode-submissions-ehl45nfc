class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //1  2  3  4
        //1  1  2  6
        //24 12 4  1
        int n = nums.size();
        vector<int>result(n),prefix(n,1),suffix(n,1);

        for(int i = 1 ; i < n ; i++){
            prefix[i] = nums[i-1] * prefix[i-1];
        }

        for(int i = n-2 ; i >= 0 ; i--){ // starts at the second-last term (3)
            suffix[i] = nums[i+1]*suffix[i+1];
        }

        for(int i = 0 ; i < n ; i++){
            result[i] = prefix[i] * suffix[i];
            cout << result[i] << " ";
        }
        cout << "\n";
        
        return result;

    }
};
