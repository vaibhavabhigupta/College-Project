#include<iostream>
using namespace std;
void abhi(int n,int x){
    if(n>x)
    return;
    cout<<n<<"\n";
   abhi(n+1,x);
}
int main(){
    int x;
    cout<<"enter x :";
    cin>>x;
    abhi(1,x);
}