class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if(len == 1){
            return 0;
        }
        if(len == 2 && prices[1] - prices[0] > 0){
            return prices[1] - prices[0];
        }
        
        int maxSell = 0;
       for (int i = 0; i < len; i++) {
            for(int j = 0; j<i; j++){
                if((prices[i] - prices[j]) > maxSell){
                    maxSell = prices[i] - prices[j];
                }
            }

       }

       //std::cout << minPrice << ", " << maxPrice << std::endl;
       return maxSell;
    }
};
