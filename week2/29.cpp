// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends


class Solution{
    public:
    // Function to return maximum of sum without adjacent elements
    ll FindMaxSum(ll arr[], ll n)
    {
        // Your code here
        ll incl=arr[0];
        ll excl=0;
        ll excl2;
        int i;
        for(i=1;i<n;i++){
            excl2=(incl>excl)?incl:excl;
            incl=excl+arr[i];
            excl=excl2;
        }
        return ((incl>excl)?incl:excl);
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		ll n;
		cin>>n;
		ll a[n];
		
		//inserting money of each house in the array
		for(ll i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
