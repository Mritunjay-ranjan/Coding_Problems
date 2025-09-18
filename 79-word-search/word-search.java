class Solution {
    public boolean exist(char[][] board, String word) {
        int rows = board.length;
        int cols = board[0].length;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(board[i][j]==word.charAt(0)){
                    if(backtracking(i, j, word, board, 0)){
                        return true;
                    }
                }
            }
        }
        return false;
    }

    public boolean backtracking(int row, int col, String word, char[][] board, int index){
        if(index>=word.length()){
            return true;
        }

        if(row<0 || col<0 || row>=board.length || col>=board[0].length || board[row][col]!=word.charAt(index)){
            return false;
        }
        char temp = board[row][col];
        board[row][col]='#';
        int[] rowOffset = {-1, 0, 1, 0};
        int[] colOffset = {0, 1, 0, -1};
        for(int i=0;i<4;i++){
            if(backtracking(row+rowOffset[i], col+colOffset[i], word, board, index+1)){
                return true;
            }
        }
        board[row][col]= temp;
        return false;
    }
}