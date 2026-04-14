class Solution {
    bool helper(vector<int> p, int s, int t){
        long long h = 0;
        for(int i = 0 ; i < p.size() ; i++){
            h += ceil((double)p[i]/s);
        }
        return(h <= t ? true : false);
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r = *max_element(piles.begin(), piles.end());
        int l = 1;
        int ans = r;
        while(l <= r){
            int m = (l+r)/2;
            if(helper(piles, m, h)){
                ans = (m <= ans ? m : ans);
                r = m-1;
            }else if(!helper(piles, m, h)){
                l = m+1;
            }
        }

        return ans;

    }
};
