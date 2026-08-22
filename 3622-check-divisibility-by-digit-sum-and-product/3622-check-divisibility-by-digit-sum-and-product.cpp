class Solution {
public:
    bool checkDivisibility(int n) {
        string str = to_string(n);
        int s = str.size();

     
        int sum = 0;
        for (int i = 0; i < s; i++) {
            sum += (str[i] - '0');
        }

        
        int prod = 1;
        for (int i = 0; i < s; i++) {
            prod *= (str[i] - '0');
        }

        
        int total = sum + prod;

        return n % total == 0;
    }
};