class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int ans(int n, int x, int y, int z, int dp[]){
    if(n==0)
        return 0;
    if(n<0)
        return INT_MIN;
    if(dp[n]!=-1)
        return dp[n];
    int a=ans(n-x,x,y,z,dp)+1;
    int b=ans(n-y,x,y,z,dp)+1;
    int c=ans(n-z,x,y,z,dp)+1;
    
    return dp[n]=(max(max(a,b),c));

}
    int maximizeTheCuts(int n, int x, int y, int z){
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        int a= ans(n,x,y,z,dp);
        if(a<0)
            return 0;
        return a;
    }
};
