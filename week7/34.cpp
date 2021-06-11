vector<int> topologicalSort(vector<int>indegree,int V,vector<int> adj[]){
    vector<int> topological;
    queue<int> q;

    for (int i = 0; i < V; i++)
        if (indegree[i] == 0)
            q.push(i);
 
    while (!q.empty()){
        int t = q.front();
        q.pop();
        topological.push_back(t);

        for (int j = 0; j <adj[t].size();j++)
        {
            indegree[adj[t][j]]--;
            if (indegree[adj[t][j]] == 0)
                q.push(adj[t][j]);
        }
    }
    return topological;
}
 

void maximumEdgeAddtion(int V,vector<int> adj[]){
    vector<int>indegree=findIndegree(adj,V);
    bool *visited = new bool[V];
    vector<int> topo = topologicalSort();

    for (int i = 0; i < topo.size(); i++){
        int t = topo[i];
 
        for (int j = 0; j <adj[t].size(); j++)
            visited[adj[t][i]] = true;
 

        for (int j = i + 1; j < topo.size(); j++){
            if (!visited[topo[j]])
                cout << t << "-" << topo[j] << " ";
            visited[topo[j]] = false;
        }
    }
}
