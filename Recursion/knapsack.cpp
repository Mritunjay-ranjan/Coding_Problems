#include<iostream>
using namespace std;

int knapsack(int wt[], int value[], int n, int w){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]>w){
       knapsack(wt, value, n-1, w);
    }
    return max((knapsack(wt, value, n-1, w-wt[n-1])+value[n-1]), knapsack(wt, value, n-1, w));
}

int main(){

    int wt[]={10,20,30};
    int value[]={100,50,150};
    int w=50;
    
    cout<<knapsack(wt, value, sizeof(wt)/sizeof(wt[0]), w)<<endl;
    return 0;
}
