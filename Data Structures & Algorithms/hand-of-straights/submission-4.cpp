class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize != 0) return false;
        vector<int> arr(*max_element(hand.begin(), hand.end())+1, 0);
        for(const int& i : hand){
            arr[i]++;
        }

        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] != 0){
                int count = arr[i]; //the maximum groups than can be made from the digit i
                                    //if there's two 5s then you could (theoretically)
                                    //make 2 distinct groups both with 5 in em
                for(int j = i ; j < i + groupSize ; j++){
                    if(j >= arr.size() || arr[j] < count) return false;
                    arr[j] -= count;
                }
            }
        }
        return true;
    }
};
