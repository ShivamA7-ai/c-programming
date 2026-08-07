#include<iostream>
using namespace std;

class student {
public:
    string name;
    int prn;

    
    student(string name, int prn) {
       this->name = name;
    this->prn = prn;
    }

    void display() {
        cout << "name is: " << name << endl;
        cout << "prn is: " << prn << endl;
    }
};

int main() {
    
    student s1("shivam", 69);
    s1.display();
    return 0;
}
