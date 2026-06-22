class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int max = 0; 
      int curr = 0;

      for(int &i : nums){
        if(i == 1){
            curr +=1;
            if(curr > max){
                max = curr;
            }
        }else{
            curr = 0;
        }
      }
      return max;
    }
};