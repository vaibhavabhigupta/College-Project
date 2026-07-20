#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<("enter name : ");
    // cin>>s; // only one word
    getline(cin,s); //full line
    cout<<s;
}