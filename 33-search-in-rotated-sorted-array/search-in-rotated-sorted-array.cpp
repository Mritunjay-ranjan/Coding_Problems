class Solution {
public:
    int search(vector<int>& arr, int key) {
        int start =0;
        int end = arr.size()-1;
        int point=-1;
        int index=-1;
        
        while(start<=end){
            int mid = start+(end-start)/2;
            if(mid+1<=arr.size()-1){
            if(arr[mid]>arr[mid+1]){
                point = mid;
                break;
            }
            }
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        if(point==-1){
            start=0;
            end=arr.size()-1;
        }
        else if(key<arr[0]){
            start=point+1;
            end=arr.size()-1;
        }
        else{
            start=0;
            end=point;
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return index;
    }
};