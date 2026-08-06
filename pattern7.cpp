#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        cout<<endl;
        for(int j=1;j<=i;j++){
            cout<<ch;   
        ch++;     }
    }
    return 0;
}