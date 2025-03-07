//gfg
#include<iostream>
using namespace std;

// void missNo(int arr[], int n){
//     int flag;
//     for(int i=1;i<=n;i++){
//         flag=0;
//         for(int j=0;j<n;j++){
//             if(arr[j]==i){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag){
//             continue;
//         }
//         else{
//             cout<<i<<" ";
//         }
//     }
// }

//negate the visited 
// void missNo(int arr[], int n){
//     vector<int>miss;
//     for(int i=0;i<n;i++){
//         if((arr[(abs(arr[i]))-1])>0)
//         arr[(abs(arr[i]))-1]*=-1;
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             continue;
//         }
//         else{
//             miss.push_back(i+1);
//         }
//     }
//     for(int i=0;i<miss.size();i++){
//         cout<<miss[i]<<" ";
//     }
// }

void missNo(int arr[], int n){
    int i=0;
    while(i<n){
        if(arr[i]!=arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }
    }
}

int main(){
    int arr[]={1, 3, 3, 3, 5};
    //        {-1,-2,-3,-4,4,7,-7}
    int n=5;
    missNo(arr,n);
    return 0;
}