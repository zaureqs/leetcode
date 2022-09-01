class Solution {
    public int maxProfit(int[] prices) {
        int minprice = prices[0],maxprofit = 0;
        int n = prices.length;
        if(n<=0)
            return 0;
        for(int i = 1;i<n;i++){
            minprice = Math.min(minprice,prices[i]);
            maxprofit = Math.max(maxprofit,prices[i]-minprice);
        }
        return maxprofit;
    }
}