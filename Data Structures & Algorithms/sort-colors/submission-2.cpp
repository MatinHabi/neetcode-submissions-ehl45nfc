class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> arr(3, 0);
        for(int& i : nums){
            arr[i]++;
        }
        int j = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            while(arr[i] > 0){
                nums[j] = i;
                arr[i]--;
                j++;
            }
        }
    }
};