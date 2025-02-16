class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max=INT_MIN;
        double sum=0; 
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        max=sum;
        for(int i=0;i<nums.size()-k;i++){
            sum-=nums[i];
            sum+=nums[i+k];
            if(sum>max){
                max=sum;
            }
        }
        return max/k;
    }
};