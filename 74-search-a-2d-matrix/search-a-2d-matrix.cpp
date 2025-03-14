class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = 0;
        int e = matrix.size()*matrix[0].size()-1;
        int c = matrix[0].size();
        while(s<=e){
            int mid = s + (e-s)/2;
            if(matrix[mid/c][mid%c]==target){
                return true;
            }
            else if(matrix[mid/c][mid%c]<target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return false;
    }
};