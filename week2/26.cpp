// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *a, int n) {
	    // code here
	    long long int mae=1;
	    long long int mie=1;
	    long long msf=0;
	    int flag=0;
	    int i;
	    for(i=0;i<n;i++){
	        if(a[i]>0){
	            mae=mae*a[i];
	            mie=mie*a[i]<1?mie*a[i]:1;
	            flag=1;
	        }
	        else if(a[i]==0){
	            mae=1;
	            mie=1;
	        }
	        else{
	            long long int temp=mae;
	            mae=mie*a[i]>1?mie*a[i]:1;
	            mie=temp*a[i];
	        }
	        if(msf<mae){
	            msf=mae;
	        }
	    }
	    if(msf==0&&flag==0){
	        return 0;
	    }
	    return msf;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
