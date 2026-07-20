#include<iostream>
using namespace std;
int main(){
    int size=5,b[size];
    cout<<"enter b :";
    for(int i=0;i<=4;i++){
        cin>>b[i];
    }
     for(int i=0;i<=4;i++){
        cout<<b[i]<<" ";
    }
     b[1]= 12;
     cout<<"\n ";
    for(int i=0;i<=4;i++){
        cout<<b[i]<<" ";
    }

}
    