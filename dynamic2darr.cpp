#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"enter rows";
    cin>>rows;
    cout<<"enter cols";
    int cols;
    cin>>cols;
    int* *mat=new int*[rows];
    for(int i=0;i<=rows;i++){
        mat[i]=new int[cols];
    }
int x=1;
    for(int i =0;i<rows;i++){
        for(int j=0;j<cols;j++){
            mat[i][j]=x++;
            cout<<mat[i][j]<<endl;
        }
    }

    return 0;

}