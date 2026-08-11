#include <iostream>
using namespace std;


void subarr(int *ptr,int n){
     for( int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            cout<<"("<<st<<","<<end<<")";

        }
        cout<<endl;
     }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;

    subarr(arr,5);
    return 0;

}