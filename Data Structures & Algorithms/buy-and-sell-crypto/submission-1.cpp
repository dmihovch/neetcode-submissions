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
        
        int ret = 0;
        int maxSell = 0;
        int minBuy = 0;
        int candidate = 0;
       for (int i = 0; i < len; i++) {
            int d = i,u = i;
            candidate = prices[i];
            for(int d = i-1; d >= 0; d--){
               if((candidate - prices[d]) > ret) {
                ret = candidate - prices[d];
               }
            }

            for(int u = i+1; u < len; u++){
                if((prices[u] - candidate) > ret ){
                    ret = prices[u] - candidate;
                }
            }

       }

       //std::cout << minPrice << ", " << maxPrice << std::endl;
       return ret;
    }
};
