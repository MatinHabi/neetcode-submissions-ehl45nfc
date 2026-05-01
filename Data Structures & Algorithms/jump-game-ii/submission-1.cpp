class Solution {
public:
    int jump(vector<int>& nums) {
        int res = 0;
        int l = 0, r = 0;
        int far = 0;
        while(r < nums.size()-1){
            for(int i = l ; i <= r ; i++){
                far = max(far,i + nums[i]);
            }
            l = r+1;
            r = far;
            res+=1;
        }
        return res;
    }
};
