#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
    }
int main(){ 
    int x =3;
    int y =2;
      cout<<x<<" "<<y<<"\n";  
swap(&x,&y);
    cout<<x<<" ";
    cout<<y<<"\n";
}