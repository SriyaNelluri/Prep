class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool dfs(int i,bool visited[] , vector<int> adj[], int parent){
    visited[i]=1;
    for(auto it=adj[i].begin();it!=adj[i].end();it++){
        if(!visited[*it]){
            if(dfs(*it,visited,adj,i))
                 return true;
        }
        else if((*it!=parent))      
            return true;
    }
          return false;
    }


	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	     bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    for (int u = 0; u < V; u++)
    {
        if (!visited[u])
          if (dfs(u, visited, adj,-1))
             return true;
    }
    return false;
	}
};
