class Solution {
public:
    int component_size = 0;
    bool visited[55][55];
    void floodfill(int r, int c, int color,vector<vector<int>>& grid,int n,int m){
	if ((r < 0 || r >= n || c < 0 || c >= m)  || grid[r][c] != color  || visited[r][c]  ) 
        return;
	visited[r][c] = true; 
	component_size++; 
	floodfill(r, c + 1, color,grid,n,m);
	floodfill(r, c - 1, color,grid,n,m);
	floodfill(r - 1, c, color,grid,n,m);
	floodfill(r + 1, c, color,grid,n,m);
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_area=0;
        int n=grid.size();
        int m=grid[0].size();
     for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (!visited[i][j]&&grid[i][j]==1) {
				component_size = 0;
				floodfill(i, j, grid[i][j],grid,n,m);
                if(max_area<component_size){
                    max_area=component_size;
                }
			}
		}
	}
        return max_area;
    }
};
