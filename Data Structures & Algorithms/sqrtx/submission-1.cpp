class Solution {
public:
    int mySqrt(int x) {
        //0 1 2 3 4 5
        //L   m=2.5 R
        //0 1 2 2.5
        //L m    R
        //  = 1.25

        int l = 0, r = x, m, res;
        if(x == 0){return 0;}else if(x <= 3){return 1;}
        while(l <= r){
            m = l+((r-l)/2);
            if((long long)m*m > x){r = m-1;}
            else if((long long) m*m < x){l = m+1; res = m;}
            else {return m;}
        }
        return res;

    }
};