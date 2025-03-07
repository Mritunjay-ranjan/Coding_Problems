#include<iostream>
using namespace std;

int diagonalSum(int arr[][3], int row, int col){
    int sum=0;
    for(int i=0;i<row &&  i<col;i++){
        sum+=arr[i][i];
    }
    return sum;
}

int reverseDiagonal(int arr[][3], int row, int col){
    int sum=0;
    int k=row-1;
    if(col<row){
        k=col-1;
    }

    for(int i=0;i<=k; i++){
        sum+=arr[k-i][0+i];
    }

    return sum;
}

int main(){
    int arr[][3]={{1,2,3},
                  {4,5,6},
                  {7,8,9},
                  {10,11,12}};
    int row=4;
    int col=3;
    cout<<diagonalSum(arr, row, col)<<endl;
    cout<<reverseDiagonal(arr, row, col)<<endl;
    return 0;
}