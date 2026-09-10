class Solution {
public:
    int uniqueLetterString(string s) {
        int n=s.length();
        long long res=0;

        vector<int>last(26,-1);
        vector<int>secondLast(26,-1);

        for (int i=0;i<n;i++) {
            int c=s[i]-'A';

            res+=(long long)(i-last[c])*(last[c]-secondLast[c]);

            secondLast[c]=last[c];
            last[c]=i;
        }

        for (int c= 0; c<26;c++) {
            res+=(long long)(n-last[c])*(last[c] -secondLast[c]);
        }

        return res;
    }
};