class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>t(arr.size(),0);
        for(int& i : arr){
            if(i <= arr.size()){
                t[i-1]++;
            }
        }
        int res = -1;
        for(int i = 0 ; i < t.size() ; i++){
            if(t[i] == i+1){
                res = max(res, t[i]);
            }
        }
        return res;
    }
};