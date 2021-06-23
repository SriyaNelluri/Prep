class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int max(int a ,int b){
        return a>b?a:b;
    }
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        int L[x+1][y+1];
        for(int i=0;i<x+1;i++){
            for(int j=0;j<y+1;j++){
                if(i==0||j==0){
                    L[i][j]=0;
                }
                else if(s1[i-1]==s2[j-1]){
                    L[i][j]=L[i-1][j-1]+1;
                }
                else{
                    L[i][j]=max(L[i-1][j],L[i][j-1]);
                }
            }
        }
        return L[x][y];
    }
};
