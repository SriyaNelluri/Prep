#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,M;
	cin>>N;
	cin>>M;
	int edges=M;
    vector <int> adj[N];
	int x,y;
	for(int i = 0;i < edges;++i){
        cin >> x >> y;
        adj[x].push_back(y);        
		adj[y].push_back(x);
    }
	//taking in queries
	int Q;
	cin>>Q;
	int a,b;
	for(int i=0;i<Q;i++){
		cin>>a;
		cin>>b;
		int flag=0;
	    for(int j=0;j<adj[a].size();j++){
		    if(adj[a][j]==b){
          cout<<"YES"<<endl;
			 flag=1;
		     }
	    } 
	    if(flag==0){
         cout<<"NO"<<endl;
	    } 
    } 
}
