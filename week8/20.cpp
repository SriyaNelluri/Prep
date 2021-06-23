class Solution{
    public:
    
    int longestCommonSubstr (string X, string Y, int n, int m)
    {
        // your code here
        int L[n+1][m+1];
        int result=0;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0){
                    L[i][j]=0;
                }
                else if(X[i-1]==Y[j-1]){
                    L[i][j]=L[i-1][j-1]+1;
                    result=max(result,L[i][j]);
                }
                else{
                    L[i][j]=0;
                }
            }
        }
        return result;
    }
    
};
