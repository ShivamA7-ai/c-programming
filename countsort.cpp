#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

vector<int> countsort(vector<int> &arr){
      int  maxval=INT_MIN;
      int minval=INT_MAX;
       int freq[1000]={0};
int n=arr.size();

       for(int i =0;i<n;i++){
        maxval=max(maxval,arr[i]);
        minval=min(minval,arr[i]);

       }

       for(int i =0 ; i < n ;i++){
          freq[arr[i]]++;
       }

       for(int i = minval, j =0 ;i<=maxval;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
       }

       return arr;
}

int main(){
  vector<int> nums={2,1,1,3,2,4,4};
  vector<int> s=countsort(nums);
  for(int i : s){
    cout<<i;
  }
  return 0;
}