#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rol;
    float cgpa;

    student(string n,int r,float c){
        name=n;
        rol=r;
        cgpa=c;

    }
       
};
 void printf(student s){
     cout<<s.name<<"\n"<<s.rol<<"\n"<<s.cgpa<<"\n\n";
  
 }         
int main(){
student s1("vaibha",44,6.1);
printf(s1);
//  cout<<s1.name<<"\n"<<s1.rol<<"\n"<<s1.cgpa;
}