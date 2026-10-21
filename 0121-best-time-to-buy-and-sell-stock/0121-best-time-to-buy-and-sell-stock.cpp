class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int currProfit=0, maxProfit=0;
        // for(int i=0; i<prices.size()-1;i++){
        //     for(int j=i+1; j<prices.size(); j++){
        //         if(prices[i]<prices[j]){
        //             currProfit = prices[j]-prices[i];
        //             maxProfit = max(currProfit, maxProfit);
        //         }
        //     }
        // }
        // return maxProfit;

        int buyPrice=prices[0], profit=0;

        for(int i=1; i<prices.size(); i++){
            if(buyPrice>prices[i]){
                buyPrice = prices[i];
            }
            profit = max(profit, prices[i]-buyPrice);
        }
        return profit;
    }
};