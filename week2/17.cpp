	int matSearch (vector <vector <int>> &mat, int n, int m, int x)
	{
	    // your code here
	  if (n == 0)
        return -1;
    int smallest = mat[0][0], largest = mat[n - 1][m- 1];
    if (x < smallest || x > largest)
        return 0;
    int i = 0, j = m- 1;
    while (i < n && j >= 0){
        if (mat[i][j] == x){
            return 1;
        }
        if (mat[i][j] > x)
            j--;
        else
            i++;
    }
 
    return 0;
	}
};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}  // } Driver Code Ends
