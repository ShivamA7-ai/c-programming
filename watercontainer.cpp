#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int>height(n);
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    int ht,area;
    int width;
    int lp=0;
    int rp=n-1;
    int maxwater=0;
  while(lp<rp){
    width=rp-lp;
    ht=min(height[rp],height[lp]);
    area=ht*width;
    maxwater=max(area,maxwater);
    if(height[lp]<height[rp]){
        lp++;
    }else{
        rp--;
    }
  }
  cout<<"max water is"<<maxwater;

return 0;


}