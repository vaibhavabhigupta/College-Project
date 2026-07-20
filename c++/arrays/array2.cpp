#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    arr[0]=9; // output
   // for(int i=0;i<=4;i++){ //sidha print
   for(int i=4;i>=0;i--){
         cout<<arr[i]*5<<" "; //ulta print
    }
   
}