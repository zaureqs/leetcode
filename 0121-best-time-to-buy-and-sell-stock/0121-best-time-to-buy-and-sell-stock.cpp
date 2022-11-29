class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0],maxprofit = 0;
        int n = prices.size();
        if(n<=0)
            return 0;
        for(int i = 1;i<n;i++){
            minprice = min(minprice,prices[i]);
            maxprofit = max(maxprofit,prices[i]-minprice);
        }
        return maxprofit;
    }
};