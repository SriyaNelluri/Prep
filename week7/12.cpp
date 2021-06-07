class Solution {
public:
   void dfs(vector<vector<int>>& graph , vector<bool>& visited , int v){
        visited[v]=true;
        for(auto it : graph[v]){
            if(!visited[it]){
                dfs(graph , visited , it );
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        //cables won't be enough
        if(n>connections.size()+1)
            return -1;
        
        vector<vector<int>> graph(n);
        for(auto c : connections){
            graph[c[0]].push_back(c[1]);
            graph[c[1]].push_back(c[0]);
        }
        vector<bool> visited(n ,false);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(graph , visited , i);
            }
        }
        //one will be a connected component , rest all need to be connected to it
        return count-1;
    }
};
