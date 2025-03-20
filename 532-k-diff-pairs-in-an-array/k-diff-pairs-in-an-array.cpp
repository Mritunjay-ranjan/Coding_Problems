class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        set <pair<int,int> > ans;
        while(i<(nums.size()-1)){
        int s=i+1;
        int e = nums.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(abs(nums[mid]-nums[i])==k){
                ans.insert({nums[i],nums[mid]});
                break;
            }
            else if(abs(nums[mid]-nums[i])>k){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        i++;
        }
        return ans.size();
    }
};