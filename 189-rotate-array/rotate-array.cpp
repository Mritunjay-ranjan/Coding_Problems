class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v;
        if(nums.size()<=k){
            while(k>=nums.size()){
                k-=nums.size();
            }
        }
        //if(nums.size()>=k){
        for(int i=0;i<k;i++){
            v.push_back(nums[(nums.size())-i-1]);
        }
        for(int i=0;i<((nums.size())-k);i++){
            nums[nums.size()-1-i] = nums[(nums.size())-1-k-i];
        }
        for(int i=0;i<k;i++){
            nums[i]=v[k-1-i];
        }
        
        
        }

};