class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxprice=0;
    
        for(int i=0; i<prices.size(); i++){
            int cost =   prices[i]-mini;
            maxprice= max(cost, maxprice);
            mini= min(mini, prices[i]);
        }
        return maxprice;
    }
};

