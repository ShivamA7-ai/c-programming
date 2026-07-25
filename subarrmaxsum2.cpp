#include<iostream>  //kedans algoirthm
using namespace std;
#include<climits>

int maxsum_subarr(int arr[],int n){
    int mx=INT_MIN;
    int cs=0;
    for(int  st=0;st<n;st++){
        cs=cs+arr[st];
        mx=max(cs,mx);
        if(cs<0){
            cs=0;
        }
    }
    return mx;
    
}

int main(){
    int n;
    cout<<"enter array size :"<<endl;
    cin>>n;

    int array[n];
    cout<<"enter elements :";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

   int res= maxsum_subarr(array,n);
   cout<<"Result is:"<<res;
    return 0;


}