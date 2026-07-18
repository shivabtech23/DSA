class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int n = prices.size();
        int minprice=prices[0];
        for(int i =0;i<n;i++){
            
            int profit=prices[i]-minprice;
            res=max(res,profit);
            minprice = min(minprice,prices[i]);
        }return res;
    }
};