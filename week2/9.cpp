class Solution
{
    public:
        int closestToZero(int a[], int n)
        {
            // your code here 
        sort(a,a+n);
        int start=0;
        int end=n-1;
        int sum=0;
        int min_sum=INT_MAX;

while(start<end) { 
    sum=a[start]+a[end];
    if(abs(sum)<abs(min_sum)){
        min_sum=sum;
    }
    else if(sum<0){
            start++;
    }
    else if(sum>=0){
            end--;
    }
}
return min_sum;
}
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends
