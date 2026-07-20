#include<iostream>  
using namespace std;
int main(){
    int arr[] = {2,22,23,24,25};
    int n=sizeof(arr)/4;
    int mn= arr[0];
    for(int i=1;i<n;i++){
        // if(arr[i]>mx) mx=arr[i];
        mn=min(mn,arr[i]);
        

    }
    cout<<mn;   
}
