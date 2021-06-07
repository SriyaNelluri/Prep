bool solve(int n, vector<vector<int>>& friends) {
  vector<bool> visited(n - 1, false);

    int size = friends.size();

    for (int i = 0; i < size; i++) {
        visited[friends[i][0]] = true;
        visited[friends[i][1]] = true;
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            return false;
        }
    }
    return true;
}
