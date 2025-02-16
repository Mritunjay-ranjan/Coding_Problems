class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int max;
        int sum=0; 
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
        return (double) max/k;
    }
};