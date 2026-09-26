#include<iostream>
using namespace std;

class parent{
    public:
       void show(){
        cout<<"parent class overiden ";

       }
};
//function overiding

class child:public parent{
    public:
    void show (){
        cout<<"child class overiden";
    }
};

int main(){
    child c1;
    c1.show();
    return 0;
}