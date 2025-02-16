// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         double currSum=0;
//         double maxSum=INT_MIN;
        
//         for(int i=0;i<=(nums.size()-k);i++){
//             currSum=0;
//             for(int j=i;j<(i+k);j++){
//                 currSum+=nums[j]; 
                
//             }
//             if(currSum>maxSum){
//                 maxSum=currSum;
//             }
            
            
//         }
        
//         return maxSum/=k;
//     }
// };
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0 ; 
        double sum = 0; 
        for(int i = 0 ; i< k ; i++){
            sum += nums[i]; 
        }
        ans = sum ;
        for(int i = k ; i<nums.size() ; i++){
            sum += nums[i]; 
            sum -= nums[i-k]; 
            ans = max(ans , sum );
        }
        return ans /k ; 
    }
};