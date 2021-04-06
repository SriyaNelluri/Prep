class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   int res = 0;
	    int res_index = -1;
	    for(int i = 0; i < n; i++) {
	        int temp_res = 0;
	        for(int j = m - 1; j >= 0; j--){
	            if(arr[i][j] == 1){
	                temp_res++;
	            }
	            else {
	                break;
	            }
	        }
	        
	        if(temp_res > res){
	            res = temp_res;
	            res_index = i;
	        }
	    }
	    
	    return res_index;
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
