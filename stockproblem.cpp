#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;

    vector<int> arr(n);
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxprofit =0;
    int bestbuy=arr[0];


    for(int i =1 ; i<n ;i++){
        if(arr[i]>bestbuy){
            maxprofit=max(maxprofit,arr[i]-bestbuy);

          
        }
          bestbuy=min(bestbuy,arr[i]);
          
        
}

   cout<<"maximum profit is:"<<maxprofit;
   return 0;
}