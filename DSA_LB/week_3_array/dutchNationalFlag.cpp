#include<iostream>
using namespace std;

//sequence 0,1,2
//two pointer approach
void sortDutch(int arr[],int size){
int left = 0;
int right= size-1;

while(left<right){
    if((arr[left]==1 || arr[left]==2) && arr[right]==0){
        swap(arr[left], arr[right]);
        left++;
        right--;
        continue;
    }
    if(arr[left]==0){
        left++;
    }
    if(arr[right]==1 || arr[right]==2){
        right--;
    }
}
right=size-1;
while(left<right){
    if(arr[left]==2 && arr[right]==1){
        swap(arr[left],arr[right]);
        left++;
        right--;
        continue;
    }
    if(arr[left]==1){
        left++;
    }
    if(arr[right]==2){
        right--;
    }
}
}


int main(){
    int arr[]={0,1,2,0,2,2,0,0,1,2};
    int size=10;
    sortDutch(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}