#include<iostream>
using namespace std;

int main(){
    float a,b;
    cin>>a>>b;
    int op;
    cin>>op;
    float ans=0;
    switch(op){
        case 0:
        ans=a+b;
        break;
        case 1:
        ans=a-b;
        break;
        case 2:
        ans=a*b;
        break;
        case 3:
        ans=a/b;
        break;
        default:
        cout<<"invalid "<<endl;
        return 0;
    }
    cout<<ans<<endl;
    return 0;
}