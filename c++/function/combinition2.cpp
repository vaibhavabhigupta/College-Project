#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f *=i;
    }
      return f;

}
int main(){
    int n=1;
    cout<<"enter n :";
    cin>>n;
    int r=1;
    cout<<"enter r :";
    cin>>r;
    int a= fact(n);
    int b= fact(r);
    int c= fact(n-r);
    cout<<a/(b*c);
}
