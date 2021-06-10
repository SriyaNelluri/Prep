
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 

	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	 vector<int> indegree(V, 0);
    for (int u = 0; u < V; u++) {
        for (int itr=0; itr <adj[u].size(); itr++)
            indegree[adj[u][itr]]++;
    }
  
    queue<int> q;
    for (int i = 0; i < V; i++)
        if (indegree[i] == 0)
            q.push(i);

    int cnt = 0;
    vector<int> order;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        order.push_back(u);
        for (int itr = 0; itr <adj[u].size(); itr++)
            if (--indegree[adj[u][itr]] == 0)
                q.push(adj[u][itr]);
  
        cnt++;
    }
  
    if (cnt != V) {
        return {};
    }
    return order;
	}
};
