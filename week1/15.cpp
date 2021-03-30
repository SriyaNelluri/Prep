// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
        int evencount=0,oddcount=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                evencount++;
            }else{
                oddcount++;
            }
        }
        int even[evencount];
        int odd[oddcount];
        int j=0,k=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even[j]=arr[i];
                j++;
            }else{
                odd[k]=arr[i];
                k++;
            }
        }
        int l=evenC;
        
        sort(even,even+evencount);
        sort(odd,odd+oddcount);
       
       int i;
        for(i=0;i<evencount;i++){
           arr[i]=even[i];
        }
        int g=0;
         for(i=evencount;i<n;i++){
            arr[i]=odd[g];
            g++;
        }
    }
};
	
