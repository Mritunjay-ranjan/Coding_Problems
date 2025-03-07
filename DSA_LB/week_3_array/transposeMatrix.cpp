#include<iostream>
using namespace std;

void transpose(int arr[][3], int row, int col){
    int arr1[col][row];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr1[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void transpose1(int arr[][3], int row, int col){
    // Swap elements above the main diagonal
    for(int i=0;i<row;i++){
        for(int j=i+1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    // Print using original row and column dimensions
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9},
    //{10,11,12}
    };

    int row=3;
    int col=3;
    transpose(arr, row, col);
    transpose1(arr,row,col);
    return 0;
}