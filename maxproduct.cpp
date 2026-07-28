#include<iostream>
using namespace std;
#include<vector>
#include<climits>
#include<algorithm>

int main(){
    
    int n;
    cout<<"enter  size of array:";
    cin>>n;
    vector<int> nums(n);

    cout<<"enter elements :";
    for(int i=0;i<n;i++){
       cin>>nums[i];
    }

    int maxproduct = nums[0];
    int currmax = nums[0];
    int currmin = nums[0];

    for(int i=1;i<n;i++){
        if(nums[i]<0) swap(currmax,currmin);

        int tempmax=max({nums[i],currmax*nums[i],currmin*nums[i]});
        int tempmin=min({nums[i],currmax*nums[i],currmin*nums[i]});

        currmax =  tempmax;
        currmin=tempmin;
      maxproduct=max(currmax,maxproduct);
      
    }
    cout<<"maxproduc is  :"<<maxproduct;


}