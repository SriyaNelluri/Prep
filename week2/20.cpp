#include <bits/stdc++.h>
using namespace std;
#define l long long int
int main() {
	int t;
	cin>>t;
	while(t--){
	    l n;
	    cin>>n;
	    l arr[n][n];
	    l i,j;
	    map<l,vector<l>>m;
	    for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
                cin>>arr[i][j];
	            m[i+j].push_back(arr[i][j]);
	        }
	    }
	    for(auto itr=m.begin();itr!=m.end();itr++){
	        for(auto it=itr->second.begin();it!=itr->second.end();it++){
	            cout<<*it<<" ";
	        }
	       // cout<<endl;
	    }
        cout<<endl;
	}
	return 0;
}
