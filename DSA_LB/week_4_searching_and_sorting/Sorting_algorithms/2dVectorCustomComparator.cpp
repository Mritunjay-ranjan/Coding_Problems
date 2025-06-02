#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printVector(vector<vector<int> >&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i][0]<<" "<<v[i][1]<<endl;
    }
}

bool myComp(vector<int>&a, vector<int>&b){
    // return a[1]>b[1]; //desending
    return a[1]<b[1]; //ascending
}

int main(){
    vector<vector<int> >v;
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cout<<"Enter a and b: ";
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
        // temp.pop_back();
        // temp.pop_back();
    }
    sort(v.begin(),v.end(), myComp);
    printVector(v);
    return 0;
}