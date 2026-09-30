#include<iostream>
using namespace std;

int tiling(int n){
    if(n==0 || n==1){
        return 1;
    }

int ans1=tiling(n-1);

int ans2=tiling(n-2);
return ans1+ans2;
}

int main(){
  cout<<"the no of ways:"<<tiling(4)<<endl;
  
  return 0;
}