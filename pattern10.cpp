#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
int val=1;
    for(int i=1;i<=n;i++){
       cout<<endl;
        for(int j=1;j<=i;j++){
           cout<<val;
           val++;
        }
         
    }
    return 0;
}