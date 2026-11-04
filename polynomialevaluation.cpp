#include<iostream>
using namespace std;

struct Term{
    int coef;
    int exp;

};

int main(){
    int m;
    int x;
    Term t[20];
    int result=0;

      cout<<"enter number of terms:"<<endl;
      cin>>m;
      
      cout<<"enter coefficients and exponent\n";

      for(int i=0;i<m;i++){
        cin>>t[i].coef>>t[i].exp;
      }

      cout<<"enter value of  x :"<<endl;
      cin>>x;

      for(int i =0;i<m;i++){
        int power =1;
         for(int j=0;j<t[i].exp;j++){
            power*=x;
         }
         result=result+t[i].coef*power;
      }

      cout<<"polynomial value:\n"<<result;
      return 0;
}