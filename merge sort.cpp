#include<iostream>
using namespace std;
#include<vector>
void merge(vector <int>&arr,int low,int mid,int high){
int left=low;
vector<int >temp;
int right=mid+1;
while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;

    }else{
        temp.push_back(arr[right]);
        right++;
    }
}

while(left<=mid){
    temp.push_back(arr[left]);
    left++;
}
while(right<=high)
{ temp.push_back(arr[right]);
        right++;
    

}
for(int i= low;i<=high;i++){
    arr[i]=temp[i-low];
}}

void mergesort(vector <int> &arr,int low,int high){
    if(low>=high)return;
    int  mid=(low+high)/2;
     mergesort(arr,low,mid);
     mergesort(arr,mid+1,high);
     merge(arr,low ,mid ,high);


}
int main(){
    vector<int>array={5,2,7,3,4};
   int n=array.size();
    mergesort(array,0,n-1);
    cout<<"sorted array:\n";
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}