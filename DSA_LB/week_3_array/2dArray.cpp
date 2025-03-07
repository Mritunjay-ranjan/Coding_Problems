#include<iostream>
using namespace std;

void printArr(int arr[][4], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printArr1(int arr[][4], int row, int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row = 3;
    int col = 4;
    printArr(arr, row, col);
    int size = sizeof(arr)/sizeof(int);
    cout<<size<<endl;
    printArr1(arr,row,col);

    int arr2[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"enter element at row "<<i<<" col "<<j<<endl;
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}