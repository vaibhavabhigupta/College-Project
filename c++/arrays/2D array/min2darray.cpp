#include<iostream>
using namespace std;
int main(){
int arr[4][2]={{1,90},{2,91},{3,92},{4,93}};
int mn= INT16_MAX;
    for(int i=0;i<4;i++) {
        for(int j=0;j<2;j++){
           mn= min(mn,arr[i][j]);
        }
    }
        cout<<mn;
}