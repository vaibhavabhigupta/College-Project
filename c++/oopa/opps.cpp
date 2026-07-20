#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rol;
    float cgpa;
};


int main(){
student s1;
s1.name=("vaibhav");
s1.rol=44;
s1.cgpa=6.0;
// cin>>s1.rol;

student s2;
s2.name=("abhi");
s2.rol=33;
s2.cgpa=6.1;
cout<<s1.name<<"\n"<<s1.rol<<"\n"<<s1.cgpa<<"\n"<<"\n";
cout<<s2.name<<"\n"<<s2.rol<<"\n"<<s2.cgpa;
}    
