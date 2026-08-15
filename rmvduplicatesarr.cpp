
#include<iostream>
using namespace std;

int removeduplicates(int *arr,int n){
    if(n == 0) return 0; 

    int k = 0; 
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[k]){
            arr[++k] = arr[i];
        }
    }
    return k + 1; 
}

int main(){
    int arr[6] = {1,1,2,2,3,3};
    int n = 6;

    int newLength = removeduplicates(arr,n);

    cout << "New length: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newLength; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
