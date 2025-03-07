#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(5,-1);
    cout<<v.size()<<endl;
    cout<<endl;
    
    v.push_back(59);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<v.empty()<<endl;

    vector<vector<int> >a;

   vector<vector<int> >arr(5,vector<int>(10,-1));

   for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }

   vector<vector<int> >vec;
   vector<int>v1(5,-1);
   vector<int>v2(4,0);
   vector<int>v3(2,2);
   vector<int>v5(8,-1);

   vec.push_back(v1);
   vec.push_back(v2);
   vec.push_back(v3);
   vec.push_back(v5);

   cout<<endl;

   for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec[i].size();j++){
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
   }

   vector<vector<int> > arr(5, vector<int>(10,-1));
    return 0;
}