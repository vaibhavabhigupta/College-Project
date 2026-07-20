#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the row :";
    cin>>m;
    int n;
    cout<<"enter the colm : ";
cin>>n;
    for(int i=1;i<=m;i++){
        for(int i=1;i<=n;i++){
            cout<<"*";
        }
        cout<<"\n";
    }
}