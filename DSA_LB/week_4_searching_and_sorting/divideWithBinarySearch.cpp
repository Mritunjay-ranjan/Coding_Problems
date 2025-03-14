#include<iostream>
using namespace std;

double divide(int a, int b){
    int s = 0;
    int e = a;
    double ans = -1;
    while(s<=e){
        long long mid = s + (e-s)/2;
        if((b*mid)<=a){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    s= 0;
    e = 99;
    double result = -1;
    while(s<=e){
        long long mid = s+(e-s)/2;
        if((b*(ans+(mid/100.0)))<=a){
            result = ans+(mid/100.0);
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return result;
}

int main(){
    int a=5;
    int b=2;
    cout<<divide(a,b)<<endl;
    return 0;
}