
    void dfs(vector<vector<int>>& M, vector<bool>& vis, int i){
	vis[i]=true;
	for(auto it : M[i]){
            if(!vis[it]){
                dfs(M , vis , it );
            }
        }
}


int solve(vector<vector<int>>& friends) {

    int n=friends.size(),ans=0;
	if(n==0) return 0;
	vector<bool>vis(n,false);
	for(int i=0;i<n;i++)
	{
		if(!vis[i])
		{
			ans++;
			dfs(friends,vis,i);
		}
	}
	return ans;
}
