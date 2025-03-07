#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][3], int row, int col){
    int max= INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}

int findMin(int arr[][3], int row, int col){
    int min = INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main(){
    int arr[][3]={{1,2,30},{4,5,7},{8,9,10}};
    int row=3;
    int col=3;
    cout<<"maximum number is: "<<findMax(arr, row, col)<<endl;
    cout<<"minimum number is: "<<findMin(arr, row, col)<<endl;
    return 0;
}