#include<iostream>
using namespace std;

int sumofdiagonalelement(int arr[][3],int n){
    int sum = 0;
    for(int i = 0 ; i < n ;i++){
        sum+=arr[i][i];
        if(i!=n-i-1){
            sum+=arr[i][n-i-1];
        }
    }
    return sum;
}

int main(){
    int nums[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int s=sumofdiagonalelement(nums,3);
    cout<<s;
    return 0;

}