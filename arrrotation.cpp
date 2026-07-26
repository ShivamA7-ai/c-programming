#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


int main(){
int n;
cout<<"enter array size:";
cin>>n;
vector<int> arr(n);
cout<<"enter array elements :";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int d;
cout<<"enter d:";
cin>>d;

d=d%n;

if(n==0){
    return 0;
}

reverse(arr.begin(),arr.end());
reverse(arr.begin(),arr.begin()+d);
reverse(arr.begin()+d,arr.end());

cout<<"rotated array is :\n";
for(int i=0;i<n;i++){
    cout<<arr[i];
}

return 0;

}