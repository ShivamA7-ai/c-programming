#include<iostream>
using namespace std;

void searchkeyin2dmat(int arr[][3],int n,int k){
    //o(n*n)
   /*for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==k){
            cout<<"key is at row "<<i<<" and column "<<j;
            }
        }
    }*/

   int st=0;
    int end=n*n-1;
    while(st<=end){

        int mid=st+(end-st)/2;
        int row = mid/n;
        int col = mid%n;


        if(arr[row][col] > k){
          end =mid-1;
        }else if(arr[row][col]<k){
            st=mid+1;
        }else{
            cout<<"Key is at row " <<row<< " and column "<<col;
            return ;
            
        }
    }

cout<<"key not found";
   
}

int main(){
int nums[3][3]={{1,2,3},{4,5,6},{7,8,9}};
searchkeyin2dmat(nums,3,4);

return 0;
}