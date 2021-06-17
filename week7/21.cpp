void ff(vector<vector<string>>& matrix, string& original,string& target, int row,int col) {
    if (row < 0 ||row >= matrix.size() ||col<0|| col >= matrix[0].size()) 
        return;
    //if the cell is not the original colour return
    if (matrix[row][col] != original) 
        return;
    //else set the cell to new colour
    matrix[row][col]=target;
    //neighbouring cells
    ff(matrix,original,target, row - 1, col);
    ff(matrix,original,target, row + 1, col);
    ff(matrix,original,target, row, col - 1);
    ff(matrix,original,target, row, col + 1);
 
}


vector<vector<string>> solve(vector<vector<string>>& matrix, int r, int c, string target) {
    //if the initial cell is already in the target colour then no need to change any
    if (matrix[r][c] == target) 
        return matrix;
    //get the initial cell colour to traverse neighbouring cells
    string original = matrix[r][c];
    ff(matrix, original, target, r, c);
    
    return matrix;
}
