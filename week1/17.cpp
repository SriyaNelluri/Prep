// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int notzero=0;
	    int i;
	    for(i=0;i<n;i++){
	        if(arr[i]!=0){
	            arr[notzero++]=arr[i];
	        }
	    }
	    for(i=notzero;i<n;i++){
	        arr[i]=0;
	    }
	}
};
