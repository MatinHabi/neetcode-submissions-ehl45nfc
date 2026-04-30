class Solution {
public:
    int jump(vector<int>& nums) {
        int res = 0;
        int l = 0, r = 0;

        while(r < nums.size()-1){
            int farthest = *max_element(nums.begin()+l, nums.begin()+r+1);
            for(int i = l ; i <= r ; i++){
                farthest = max(farthest, i + nums[i]);
            }
            l = r+1;
            r=farthest;
            res+=1;
        }
        return res;

    }
};
