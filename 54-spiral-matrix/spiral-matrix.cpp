class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;

        int left= 0;
        int right = matrix[0].size();
        int top= 0;
        int bottom = matrix.size();
        while(left <right && top<bottom){

            for(int j=left;j<right;j++){
                result.push_back(matrix[top][j]);
            }
            top++;

            for(int i=top;i<bottom;i++){
                result.push_back(matrix[i][right-1]);
            }
            right--;

            if(!(top<bottom && left<right))
            break;

            for(int j=right-1;j>=left;j--){
                result.push_back(matrix[bottom-1][j]);
            }
            
            bottom--;

            for(int i=bottom-1;i>=top;i--){
                result.push_back(matrix[i][left]);
            }
            left++;
        }
        return result;
    }
};