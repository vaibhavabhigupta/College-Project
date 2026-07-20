#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0]=6;
     arr[0][1]=1;
      arr[0][2]=3;
       arr[1][0]=9;
        arr[1][1]=7;
         arr[1][2]=4;
         for(int j=0;j<3;j++){
            for(int i=0;i<2;i++){
                 cout<<arr[i][j]<<" ";
            }
           cout<<"\n";
         }
         
}