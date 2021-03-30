// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int count0=0;
        int count1=0;
        int count2=0;
        int i;
        for(i=0;i<n;i++){
            if(a[i]==0){
             count0++;   
            }
            else if(a[i]==1){
             count1++;
            }
            else{
                count2++;
            }
        }
        for(i=0;i<count0;i++){
                a[i]=0;
            }
        for(i=count0;i<count0+count1;i++){
                a[i]=1;
            }
        for(i=count0+count1;i<n;i++){
                a[i]=2;
            }
            
        }

    };
