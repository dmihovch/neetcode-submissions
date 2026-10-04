class Solution {
    /**
     * @param {number[]} prices
     * @return {number}
     */
    maxProfit(prices: number[]): number {

        let min : number = 101;
        let res: number = 0;
        for ( let price of prices){
            if(price < min) min = price;
            if(price - min > res) res = price - min;
        }
        return res;

    }
}
