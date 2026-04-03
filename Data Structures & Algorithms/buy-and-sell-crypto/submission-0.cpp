class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        int msf=prices[0];
        for(int i=0;i<n;i++){
        msf=min(msf,prices[i]);
            int profit=prices[i]-msf;
            maxprofit=max(profit,maxprofit);

        }
        return maxprofit;
        
    }
};
