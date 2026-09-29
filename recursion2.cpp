#include<iostream>
using namespace std;

void printnum(int num){
    if(num==0){
        return;
    }
    cout<<num<<" ";
    printnum(num-1);
}

int main(){
    printnum(5);
    return 0;
}