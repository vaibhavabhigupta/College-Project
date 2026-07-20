#include<iostream>
using namespace std;
int main(){
    string s=("cow is an animal with four lags");
    int cou=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'|| s[i]=='i'|| s[i]=='e'|| s[i]=='o'|| s[i]=='u'){
            cou++;
        }
    }
    cout<<cou;
}