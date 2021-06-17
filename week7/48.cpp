int solve(vector<vector<int>>& matrix) {
    int height = matrix.size();
    if (height == 0) 
        return -1;

    int width = matrix[0].size();
    if (width == 0) 
        return -1;

    queue<pair<int, int>> queue;  
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if (matrix[row][col] == 0) 
               queue.push(make_pair(row, col));
        }
    }

    int dir[5] = {1, 0, -1, 0, 1};
    int max_dist = -1;
    int curr_dist = 0;

    while (!cell_queue.empty()) {  // BFS
        int size = queue.size();
        curr_dist++;

        for (int i = 0; i < size; i++) {
            int row = queue.front().first;
            int col =queue.front().second;
            queue.pop();

            for (int d = 1; d <= 4; d++) {
                int r = row + dir[d - 1];
                int c = col + dir[d];
                if (r < 0 || c < 0 || r >= height || c >= width||matrix[r][c]==0)                    
                  continue;

                matrix[r][c] = 0;  
                max_dist = curr_dist;
               queue.push(make_pair(r, c));
            }
        }
    }

    return max_dist; 
}
