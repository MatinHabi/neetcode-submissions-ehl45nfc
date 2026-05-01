class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> arr(3, 0);
        for(int& i : nums){
            arr[i]++;
        }
        nums.clear();
        for(int i = 0 ; i < arr.size() ; i++){
            for(int j = 0 ; j < arr[i] ; j++){
                nums.push_back(i);
            }
        }
    }
};