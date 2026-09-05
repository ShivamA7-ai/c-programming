#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    int maxLen(vector<int>& arr) {
       int n=arr.size();
       int maxlength=0;
       
       for(int i= 0 ;i<n ;i++){
        int sum=0;
        for(int j=i;j<n;j++){
             sum+=arr[j];
             if(sum==0){
             maxlength=max(maxlength,j-i+1);
             }
        }
       }
       return maxlength;
    }
};

int main(){
  Solution s1;
  vector<int>nums={15,2,-2,-8,1,7,10,23};
  int s=s1.maxLen(nums);
  
    cout<<s;
  
  return 0;
}