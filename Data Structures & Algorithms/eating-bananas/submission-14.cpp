class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r=*max_element(piles.begin(), piles.end());
        int res=r;
        while(l<=r){
            int m=(l+(r-l)/2); //speed
            long long time = 0;
            for(auto i : piles){
                time += (int)ceil((double)i/m);
            }

            if(time <= h){
                if(m < res){
                    res = m;
                }
                r=m-1;
            }else{
                l=m+1;
            }
        }
        return res;
    }
};
