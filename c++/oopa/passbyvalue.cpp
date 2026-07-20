#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int price;
    int seats;
    
};
void printf(car c){
    cout<<c.name<<"\n"<<c.price<<"\n"<<c.seats<<"\n\n";
  
}
  void change(car& c1){
        c1.name=("audi");
    }
int main(){
    car c1;
    c1.name=("tata");
    c1.price=1200000;
    c1.seats=5;
    printf(c1);
    change(c1);
    printf(c1);
}