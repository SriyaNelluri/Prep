
class Solution{
public:
    int max(int a,int b){
        return a>b?a:b;
    }
    int knapSack(int N, int W, int val[], int wt[]){
        int dp[W+1];
        memset(dp, 0, sizeof dp);

        for (int i=0; i<=W; i++)
          for (int j=0; j<N; j++)
             if (wt[j] <= i)
                dp[i] = max(dp[i], dp[i-wt[j]] + val[j]);
     
        return dp[W];
    }
};
