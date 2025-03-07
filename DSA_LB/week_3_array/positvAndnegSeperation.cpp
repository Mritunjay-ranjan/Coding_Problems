#include<iostream>
using namespace std;

void seperate(int arr[], int n){
    int left=0;
    int right=n-1;

    while(left<right){
        while(arr[left]<0 && left<right){
            left++;
        }
        while(arr[right]>=0 && left<right){
            right--;
        }
        swap(arr[left],arr[right]);
    }
}

void seperate1(int arr[], int n){
    int arr1[n];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr1[count]=arr[i];
            count++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            arr1[count]=arr[i];
            count++;
        }
    }
    //print
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}

void separate(int arr[], int n){
    int j=0;
    int i=0;
    while(i<n){
        while(i<n && arr[i]>=0 ){
            i++;
        }

        while(j<i && arr[j]<0 ){
            j++;
        }
        if(i<n)
        swap(arr[j], arr[i]);
    
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

/*
void separate3(int arr[], int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
*/

int main(){
    int arr[]={23,-7,12,-10,-11,40,60};
    int n=7;
    seperate1(arr,n);

    cout<<endl;

    separate(arr,n);
    cout<<endl;

    
    seperate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}