#include<iostream>
using namespace std;
void swap(int& x,int& y){
    int temp = x;
    x=y;
    y=temp;

    }

int main(){
    int x =3;
    int y =2;

    //int temp=x;
    //x=y;
    //y=temp;
    //x=x+y;
    //y=x-y;
    //x=x-y; 
   
      cout<<x<<" "<<y<<"\n";  
swap(x,y);
    cout<<x<<" ";
    cout<<y<<"\n";
}