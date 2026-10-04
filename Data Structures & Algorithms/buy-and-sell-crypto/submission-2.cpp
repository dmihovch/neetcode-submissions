class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int delta = 0;
        int min = INT_MAX;
        for ( int i = 0; i< len; i++){

            if(prices[i] < min) min = prices[i];
            if(prices[i] - min > delta) delta = prices[i] - min;

        }
        return delta;
    }
};
