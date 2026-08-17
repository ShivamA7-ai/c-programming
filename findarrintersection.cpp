#include<iostream>
using namespace std;
#include<vector>

vector<int> findarrintersection(vector <int>&arr1,int m,vector <int>&arr2,int n){
    int i=0;
    int j=0;
    vector<int>temp;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr1[i]>arr2[j]){
            j++;

        }else{
          temp.push_back(arr1[i]);
          i++;
          j++;
        }
    }
    return temp;
}

int main(){
    vector<int>a={1,2,2,3,3,4,5,6};
    vector<int>b={2,3,3,5,6,6,7};
    int n1=a.size();
    int n2=b.size();
    vector<int> temp=findarrintersection(a,n1,b,n2);
    cout<<"intersection:";
    
for (int x : temp) {
        cout << x << " ";
}
cout << endl;
return 0;
}