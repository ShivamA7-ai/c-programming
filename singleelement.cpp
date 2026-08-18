#include<iostream>
using namespace std;
#include<vector>

int singleelement(vector<int>&arr){
    //it can be done by hashing 
    int value=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        value=value^arr[i];
    }

    return value;
}

int main(){
    vector<int>array={1,1,2,3,3,4,4,0,0};
    int s=singleelement(array);
    cout<<"single element in array is:"<<s;
    return 0;

}