#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,3,4,5,5,6};

    int n=sizeof(arr)/sizeof(arr[0]);
    int evencnt=0;
    int oddcnt=0;  //1+1+n+n+n
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
           evencnt++;
        }else{
            oddcnt++;
        }
    }

    cout<<"even count:"<<evencnt<<endl;
    cout<<"odd count:"<<oddcnt<<endl;
    return 0;
}