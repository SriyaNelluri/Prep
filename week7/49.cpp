class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
     vector<vector<pair<int, int>>> graph(n+1);
     vector<bool> visited(n+1);
       for(auto v: times)
            graph[v[0]].push_back(make_pair(v[2], v[1]));
        
        
        priority_queue<pair<int, int>, vector<pair<int, int>>,greater<pair<int,int>> >pq;
        pq.push(make_pair(0, k));
        int max_ans = INT32_MIN;
        
        while(!pq.empty()){
            auto p = pq.top(); pq.pop();
            int node = p.second, wt = p.first;
            if(visited[node]) 
                continue;
            visited[node] = true;
            n--;
            max_ans = max(max_ans, wt);
            
            for(auto child_pair: graph[node]){
                int child = child_pair.second, child_wt = child_pair.first;
                if(visited[child]) 
                  continue;
                pq.push(make_pair(child_wt + wt, child));
            }
        }
        return n == 0 ? max_ans : -1;

    }
};
