class Solution {
public:
    int solve(vector<int>& values, int start, int end){
        if(start == end){
            return values[start];
        }
        int mid = start + ((end-start)>>1);
        int leftMax = solve(values, start, mid);
        int rightMax = solve(values, mid+1, end);

        int leftMid = 0, rightMid = 0;
        int leftMidMax = INT_MIN, rightMidMax = INT_MIN;
        for(int i=mid; i>=start; i--){
            leftMid+=values[i];
            if(leftMid>leftMidMax) leftMidMax = leftMid;
        } 
        for(int i=mid+1;i<=end;i++){
            rightMid += values[i];
            if(rightMid>rightMidMax) rightMidMax = rightMid;
        }
        int midMax = rightMidMax + leftMidMax;
        return max(leftMax, max(midMax, rightMax));
    }
    
    int maxSubArray(vector<int>& values) {
        return solve(values, 0, values.size()-1);
    }
};