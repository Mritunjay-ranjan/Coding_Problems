#include<iostream>
using namespace std;

void colSum(int arr[][2], int row, int col){
    int sum;
    for(int i=0;i<col;i++){
        sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<"sum of "<<i<<" col is: "<<sum<<endl;

    }
}

int main(){
    int arr[][2]={{1,2},{3,4}};
    int row=2;
    int col=2;
    colSum(arr, row, col);
    return 0;
}