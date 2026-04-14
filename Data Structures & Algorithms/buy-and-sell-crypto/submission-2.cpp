class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //buy = prices[i]
        //BUY LOW SELL HIGH
        //so we have a suffix arr for sell
                //sell[i] = MAX prices from i -> end
        //find max profit by setting profit to 0

        vector<int> sell(prices.size(), -99);
        int n = prices.size();
        sell[n-1] = 0;
        int max = -1;
        for(int i = n-2 ; i >= 0 ; i--){
            if(prices[i+1] > max){max = prices[i+1];}
            sell[i] = max;
        }
        int profit = -100000;
        for(int i = 0; i < n ; i++){
            int total = sell[i] - prices[i];
            if(total > profit){profit = total;}
        }
        if(profit <= 0){profit = 0;}
        return profit;
    }
};
