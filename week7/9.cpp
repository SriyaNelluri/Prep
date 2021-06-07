class Solution {
public:
   
 void dfs(vector<vector<int>> &graph, int s, vector<bool> &visited){
        visited[s] = true;
        for(int i = 0; i < graph[s].size(); i++){
            if(!visited[graph[s][i]]){
                dfs(graph, graph[s][i], visited);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int i, n=rooms.size();
        vector<bool> visited(n, false);
        dfs(rooms, 0, visited);
        for(i = 0; i < n; i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }
};
