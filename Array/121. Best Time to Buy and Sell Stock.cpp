class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int cost=INT_MAX;
        int maxi=0;
        for(int i=0;i<n;i++){
            cost=min(cost,prices[i]);
            maxi=max(maxi,prices[i]-cost);
        }
        return maxi;
    }
};
