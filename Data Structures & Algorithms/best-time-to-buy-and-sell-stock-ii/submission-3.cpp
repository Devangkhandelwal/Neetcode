class Solution {
public:
    int fn(int ind, int buy, vector<int> &prices,vector<vector<int>> &dp){
        int n= prices.size();
        if(ind==n)return 0;
        if(dp[ind][buy]!=-1)return dp[ind][buy];
        int profit=0;
        if(buy){
            profit= max(-prices[ind]+fn(ind+1,0,prices,dp),0+ fn(ind+1,1,prices,dp));
        }
        else
         profit= max(prices[ind]+fn(ind+1,1,prices,dp), 0+fn(ind+1,0,prices,dp));

        dp[ind][buy]= profit;
        
        return dp[ind][buy];
    }
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        vector<vector<int>> dp(n, vector<int> (2,-1)); 
        // int profit=0;
        // for(int i=0; i<n-1; i++){
        //     profit+= max(0,prices[i+1]- prices[i]);
        // }
        // return profit;
        return fn(0,1,prices,dp);
    }
};