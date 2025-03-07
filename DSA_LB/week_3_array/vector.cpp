#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    for(auto a:v){
        cout<<a<<endl;
    }
}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    print(v);
    return 0;
}