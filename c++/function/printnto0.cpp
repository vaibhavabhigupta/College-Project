#include<iostream>
using namespace std;
void print(int n){
    if(n==0)return;//base
       print(n-1);  //call //ulta //work    
       cout <<n<<"\n";//work //call

}
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    print(n);

}