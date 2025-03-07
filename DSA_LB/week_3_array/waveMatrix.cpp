#include<iostream>
using namespace std;

void wave(int mat[][4],int m, int n){
    int i;
    int j=0;
    while(j<n){
        
        if(j%2==0){
            i=0;
            while(i<m) cout<<mat[i++][j]<<" ";
            j+=1;
        }
        else{
            i=m-1;
            while(i>=0) cout<<mat[i--][j]<<" ";
            j+=1;
        }
    }
}

int main(){
    int mat[][4] = {{1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16},
    {17, 18, 19, 20}};

    int m=5;
    int n=4;
    cout<<"1 5 9 13 17 18 14 10 6 2 3 7 11 15 19 20 16 12 8 4 "<<endl;
    wave(mat,m,n);
    return 0;
}