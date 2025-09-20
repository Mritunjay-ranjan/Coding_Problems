class Solution {
    public int numIslands(char[][] grid) {
        int row = grid.length;
        int col = grid[0].length;

        int island = 0;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    island++;
                    dfs(i, j, grid);
                }
            }
        }
        return island;
    }

    public void dfs(int i, int j, char[][] grid){
        int row = grid.length;
        int col = grid[0].length;

        int[][] directions = new int[][]{{0,1},{1,0},{0,-1},{-1,0}};

        if(i<0 || j<0 || i>=row || j>=col || grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';

        for(int[] dir: directions){
            dfs(i+dir[0], j+dir[1], grid);
        }

    }
}