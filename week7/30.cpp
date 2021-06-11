void allTopo(vector<int> indegree,int V, vector<int> adj[]){
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    vector<int> result;
    alltopoUtil(indegree,V,adj,result,visited);
}
void alltopoUtil(vector<int> indegree,int V;vector<int> adj[],vector<int>result,bool visited[]){
    bool flag = false;
    for (int i = 0; i < V; i++){
        if (indegree[i] == 0 && !visited[i])
        {
            list<int>:: iterator j;
            for (j = adj[i].begin(); j != adj[i].end(); j++)
                indegree[*j]--;
            result.push_back(i);
            visited[i] = true;
            alltopotUtil(indegree,V,adj,result,visited);

            visited[i] = false;
            res.erase(res.end() - 1);
            for (j = adj[i].begin(); j != adj[i].end(); j++)
                indegree[*j]++;
 
            flag = true;
        }
    }
 
    if (!flag)
    {
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
