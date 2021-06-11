
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
    void topologicalSortUtil(int v, bool visited[],stack<int>& Stack,vector<int> adj[]){
    visited[v] = true;
    for (int i = 0; i <adj[v].size(); ++i)
        if (!visited[adj[v][i]])
            topologicalSortUtil(adj[v][i], visited, Stack,adj);
    Stack.push(v);
}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
      stack<int> Stack;
      vector<int> res;
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            topologicalSortUtil(i, visited, Stack,adj);
    while (Stack.empty() == false) {
        res.push_back(Stack.top());
        Stack.pop();
    }
    return res;
	}
};
