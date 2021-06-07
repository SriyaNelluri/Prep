#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,M;
	cin>>N;
	cin>>M;
	int edges=M;
	//declaring adj matrix
	bool A[N][N];
	//initializing
	for(int i = 0;i <N;++i)
            for(int j = 0;j <N;++j)
                A[i][j] = false;
	int x,y;
	//adding edges
	for(int i = 0;i < edges;++i)
        {
            cin >> x >> y;
            A[x][y] = true; 
			A[y][x]=true;
       }
	//taking in queries
	int Q;
	cin>>Q;
	int a,b;
	for(int i=0;i<Q;i++){
		cin>>a;
		cin>>b;
		if(A[a][b]==1&&A[b][a]==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}

}
