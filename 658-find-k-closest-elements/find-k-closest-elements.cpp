class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int s= 0;
        int e= arr.size()-1;
        int x_index = 0;
        vector<int>ans;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(arr[mid]<=x){
                if(abs(x-arr[mid])<=abs(x-arr[x_index])){
                x_index = mid;
                }
                s = mid+1;
            }
            else if(arr[mid]>x){
                if(abs(x-arr[mid])<abs(x-arr[x_index])){
                x_index = mid;
                }
                e = mid-1;
            }
        }
        cout<<x_index<<endl;
        ans.push_back(arr[x_index]);
        k--;
        s= x_index-1;
        e= x_index+1;
        int sub = abs(x-arr[x_index]);
        while(s>=0 && e<arr.size() && k){
            if(s>=0 && abs(x-arr[s])<=abs(x-arr[e])){
                ans.push_back(arr[s]);
                s--;
                k--;
            }
            else if(e<arr.size() && abs(x-arr[s])>abs(x-arr[e])){
                ans.push_back(arr[e]);
                e++;
                k--;
            }
        }
        while(s<0 && k){
                ans.push_back(arr[e]);
                e++;
                k--;
        }
        while(e>=arr.size() && k){
                ans.push_back(arr[s]);
                s--;
                k--;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};