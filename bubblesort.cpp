#include<iostream>
using namespace std;
void bubblesort(int *arr,int n){
     for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
     }
}
int main(){
    int array[5]={5,2,7,3,4};
    int n=sizeof(array)/sizeof(array[0]);
    bubblesort(array,n);
    cout<<"sorted array:\n";
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}