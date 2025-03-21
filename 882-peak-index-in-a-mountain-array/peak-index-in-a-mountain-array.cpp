class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int ans;
        while(s<=e){
            int mid = s+ (e-s)/2;
            if(arr[mid+1]>arr[mid]){
                s = mid+1;
            }
            else{
                ans = mid;
                e = mid-1;
            }
        }
        return ans;
    }
};