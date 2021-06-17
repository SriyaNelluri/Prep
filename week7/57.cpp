void setParent(int i, int key, int* parent) {
    parent[i] = key;
}

int findParent(int i, int* parent) {
    if (i == parent[i]) {
        return i;
    }

    return findParent(parent[i], parent);
}

vector<vector<int>> solve(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<vector<int>> v(n, vector<int>(n, 0));
    int* parent = new int[n];
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
    for (int i = 0; i < graph.size(); i++) {
        if (graph[i].size() > 0) {
            for (int j : graph[i]) {
                int left = findParent(i, parent);
                int right = findParent(j, parent);
                if (left != right) {
                    setParent(right, left, parent);
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int left = findParent(i, parent);
            int right = findParent(j, parent);
            if (left == right) {
                v[i][j] = 1;
            }
        }
    }
    return v;
}
