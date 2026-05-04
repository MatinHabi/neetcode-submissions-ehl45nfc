class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int arr[10000] = {0};
        for(int i = 0 ; i < nums.size() ; i++){
            arr[nums[i]]++;
        }
        int res = -1;
        for(int i = 0 ; i < 10000; i++){
            if(arr[i]>=2){
                res= i;
            }
        }
        return res;
    }
};
