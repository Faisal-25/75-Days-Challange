class Solution {
    public int maxProfit(int[] prices) {
         
        int minPrice = prices[0];
        int ans = 0;
        for(int i = 1;i<prices.length;i++){
            if(prices[i]<minPrice){
                minPrice = prices[i];
            }
            else{
                ans = Math.max(ans, prices[i]-minPrice);
            }
        }
        return ans;
    }
}
