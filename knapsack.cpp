int solve(int W,int i, int wt[], int val[], int n,vector<vector<int>>&dp){
        if(i==0){
            if(wt[i]<=W){
                return val[i];
            }else{
                return 0;
            }
        }
        if(dp[i][W]!=-1)return dp[i][W];
        int include= 0;
        if(wt[i]<=W){
            include= val[i]+solve(W-wt[i],i-1,wt,val,n,dp);
        }
        int exclude= solve(W,i-1,wt,val,n,dp);
        dp[i][W]= max(include,exclude);
        return dp[i][W];
    }
    
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>>dp(n,vector<int>(W+1,-1));
       return solve(W,n-1,wt,val,n,dp);
    }
