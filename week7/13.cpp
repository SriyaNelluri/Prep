class Solution {
public:
    int dfs(vector<vector<int>> &graph, vector<int> &quiet, vector<int> &ans, int currentPerson) {
        if (ans[currentPerson] >= 0) {
            return ans[currentPerson];
        }
        ans[currentPerson] = currentPerson;
        for (auto child : graph[currentPerson]) {
            if (quiet[dfs(graph, quiet, ans, child)] < quiet[ans[currentPerson]]) {
                ans[currentPerson] = ans[child];
            }
        }
        return ans[currentPerson];
    }
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int size = quiet.size();
        vector<vector<int>> graph(size);
        vector<int> ans(size, -1);
        for (auto rich : richer) {
            graph[rich[1]].push_back(rich[0]);
        }
        for (int i = 0; i < size; i++) {
            dfs(graph, quiet, ans, i);
        }
        return ans;
    }
};
