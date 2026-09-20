class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int sum=0;
        int prod=1;
        
        for(int i = 0 ;i<n ;i++){
            char ch=s[i];
            prod=('z'-ch+1)*(i+1);
            sum+=prod;
        }
        return sum;
    }
};