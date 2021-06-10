bool DFSRec(vector<int> adj[], int s, bool visited[], bool recSt[]){
        visited[s] = true;
        recSt[s] = true;
        for(int u: adj[s]){
            if(visited[u] == false){
                if(DFSRec(adj, u, visited, recSt) == true){
                    return true;
                }
            }
            else if(recSt[u] == true){
                return true;
            }
        }
        
        recSt[s] = false;
        return false;
    }
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int>graph[A+1];
    int i;
    for(i=0;i<B.size();i++){
        graph[B[i][0]].push_back(B[i][1]);
    }
    bool visited[A+1] = {0}, recSt[A+1] = {0};
        for(i = 0; i < A+1; i++){
            if(visited[i] == false){
                if(DFSRec(graph, i, visited, recSt) == true){
                    return 1;
                }
            }
        }
        
        return 0;
}
