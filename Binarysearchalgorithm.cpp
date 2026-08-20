#include<iostream>
using namespace std;
#include<vector>

int binarysearchalgo(vector<int>&arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
            high=mid-1;
        }else if(arr[mid]==target){
            return mid;
        }else{
            low=mid+1;
        }

    }
    return -1;
}

int main(){

    vector<int>array={2,5,4,3,6,8,7};
    int target=6;
    int s=binarysearchalgo(array,target);
    cout<<"Index at which target lies  is :"<<s;

    return 0;
}