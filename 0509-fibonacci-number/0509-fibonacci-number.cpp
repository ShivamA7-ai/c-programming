class Solution {
public:

     int fact(int m){
        if(m<=0){
            return 1;
        }
        return m*fact(m-1);
     }
    int fib(int n){
        if(n==1){
            return 1;
        }
        if(n<=0){
            return 0;
        }
        return fib(n-1)+fib(n-2);
    }
};