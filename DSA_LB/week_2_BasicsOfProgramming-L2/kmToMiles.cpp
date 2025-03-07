#include<iostream>
using namespace std;

float kmToMiles(float km){
    float miles = km * 0.621371;
    return miles;
}

int main(){
    float km;
    cin>>km;
    float mile = kmToMiles(km);
    cout<<mile;
    return 0;
}