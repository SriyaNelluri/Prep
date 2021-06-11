class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses, 0);
        queue<int> topo;
        vector<int> res;
        for(int i = 0; i<prerequisites.size(); i++){
            //addignedge
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            //increasing indegree
            indegree[prerequisites[i][0]]++;
        }

        for(int i = 0; i<indegree.size(); i++){
            if(indegree[i] == 0){
                topo.push(i);
                res.push_back(i);
            }
        }

        while(!topo.empty()){
            int node = topo.front();
            topo.pop();
            for(int i = 0; i<graph[node].size(); i++){
                int adjnode = graph[node][i];
                indegree[adjnode]--;
                if(indegree[adjnode] == 0){
                    topo.push(adjnode);
                    res.push_back(adjnode);
                }
            }
        }
        if(res.size() != numCourses){
            return vector<int>();
        }
        return res;
    }
};
