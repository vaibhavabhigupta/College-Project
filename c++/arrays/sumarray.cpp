#include<iostream>
using namespace std;
int main(){
    int arr[]={23,31,51,61,67};
    // int a=sizeof(arr)/4;    
    int sum=0;
    for(int i=0;i<=4;i++){
        sum+=arr[i];
    }
        cout<<sum;

}