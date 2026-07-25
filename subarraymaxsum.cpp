#include<iostream>
using namespace std;
#include<climits>

int maxsum_subarr(int arr[],int n){
    int mx=INT_MIN;
    for(int st=0;st<n;st++){
        int cs=0;
        for(int end=st;end<n;end++){
           cs=cs+arr[end];
            mx=max(cs,mx);
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