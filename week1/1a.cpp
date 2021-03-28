// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int i=0;
        int j=0;
        int count=0;
        //find maximum of two arrays and create size of max+1
        int max=0;
        for(i=0;i<n;i++){
            if(max<a[i]){
                max=a[i];
            }
        }    
         for(j=0;i<m;j++){
            if(max<b[j]){
                max=b[j];
            }
         }    
        int* res=(int*)malloc((max+1)*sizeof(int));
        for(j=0;j<max+1;j++){
            res[j]=0;
        }
        for(i=0;i<n;i++){
            if(a[i]!=a[i+1]){
                res[a[i]]+=1;
            }
        } 
        for(i=0;i<m;i++){
            if(res[b[i]]==0){
                res[b[i]]+=1;
            }
        } 
        for(i=0;i<max+1;i++){
            if(res[i]!=0){
                count++;
            }
        } 
        
        return count;
   
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Endsreturn 0;
}

