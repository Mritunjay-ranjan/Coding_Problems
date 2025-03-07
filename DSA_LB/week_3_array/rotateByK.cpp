#include<iostream>
using namespace std;
//shift right for k elements
void shift(int arr[], int size, int k){
    vector<int>v(size);
    
    for(int i=0;i<size;i++){
        v[(i+k)%size]=arr[i];
    }
    cout<<endl;

    for(int i=0;i<size;i++){
        cout<<v[i];
        if(i==size-1){
            cout<<".";
            break;
        }
        else{
            cout<<", ";
        }
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int k=5;
    shift(arr,size,k);
    
    return 0;
}