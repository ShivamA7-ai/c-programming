#include<iostream>
#include<string>
#include <cstring>

using namespace std;

void tolowercase(char arr[],int n ){
    for(int i=0;i<n;i++){
        char ch=arr[i];
        if(ch<='Z' && ch>='A'){
            arr[i]=ch-'A'+'a';
        }else{
            continue;
        }
    }
    cout<<arr;
}
int main(){
  char word[50]="sHIvaM";
  tolowercase(word,strlen(word));

  return 0;

}