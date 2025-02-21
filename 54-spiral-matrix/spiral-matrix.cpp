class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();             // total rows
        int n = matrix[0].size();          // total columns
        int offsetRow = 0, offsetCol = 0;    // current top-left offset
        vector<int> result;
        
        while(m > 0 && n > 0) {
            // 1. Traverse the top row (left to right)
            for (int j = offsetCol; j < offsetCol + n; j++) {
                result.push_back(matrix[offsetRow][j]);
            }
            
            // 2. Traverse the right column (top to bottom)
            for (int i = offsetRow + 1; i < offsetRow + m; i++) {
                result.push_back(matrix[i][offsetCol + n - 1]);
            }
            
            // 3. Traverse the bottom row (right to left)
            if(m > 1) {  // to avoid duplicates if only one row remains
                for (int j = offsetCol + n - 2; j >= offsetCol; j--) {
                    result.push_back(matrix[offsetRow + m - 1][j]);
                }
            }
            
            // 4. Traverse the left column (bottom to top)
            if(n > 1) {  // to avoid duplicates if only one column remains
                for (int i = offsetRow + m - 2; i > offsetRow; i--) {
                    result.push_back(matrix[i][offsetCol]);
                }
            }
            
            // Move inward to the next layer.
            offsetRow++;  
            offsetCol++;
            m -= 2;       // we’ve processed a top and bottom row
            n -= 2;       // we’ve processed a left and right column
        }
        return result;
    }
};
