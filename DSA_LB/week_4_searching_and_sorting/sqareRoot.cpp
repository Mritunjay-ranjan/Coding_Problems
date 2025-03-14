#include<iostream>
using namespace std;

double findSquareRoot(int x){
    int s = 0;
    int e = x;
    double ans;
    while(s<=e){
        long long mid = s + (e-s)/2;
        if((mid*mid)<=x){
            ans = mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    //for decimal part till 3 nos after decimal
    s=0;
    e=9999;
    double root; 
    double final;
    while(s<=e){
       long long mid = s + (e-s)/2;
       root = ans + (mid)/10000.0;
       
       if((root*root)<=x){
        final = root;
        s = mid+1;
       }
       else{
        e = mid -1;
       }
    }
    return final;
}

int main(){
    int x=12;
    cout<<findSquareRoot(x)<<endl;
    return 0;
}