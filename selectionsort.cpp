#include<iostream>
using namespace std;
void selectionsort(int *arr,int n){
     for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
           if(arr[j]<arr[mini]){
           mini=j;
           }
          
        }
         swap(arr[mini],arr[i]);
     }

}
int main(){
    int array[5]={5,2,7,3,4};
    int n=sizeof(array)/sizeof(array[0]);
    selectionsort(array,n);
    cout<<"sorted array:\n";
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}