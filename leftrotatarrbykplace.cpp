#include<iostream>
using namespace std;
#include<vector>


void leftrotatearr(vector <int > &arr,int k,int n){
    k=k%n;
    vector<int>temp(k);
    for(int i=0;i<k;i++){
          temp[i]=arr[i];
    }
     for(int i=k;i<=n-1;i++){
        arr[i-k]=arr[i];
     }
      for(int i=0;i<k;i++){
        arr[n-k+i]=temp[i];
      }
      
}
int main(){
    vector<int>arr={8,5,4,2,10,7};
    int k=3;
    int n=6;
    leftrotatearr(arr,k,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
      }
      return 0;
}