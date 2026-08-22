class Solution {
public:
    bool checkDivisibility(int n) {
        string str = to_string(n);
        int s = str.size();

        // Calculate sum of digits
        int sum = 0;
        for (int i = 0; i < s; i++) {
            sum += (str[i] - '0');
        }

        // Calculate product of digits
        int prod = 1;
        for (int i = 0; i < s; i++) {
            prod *= (str[i] - '0');
        }

        // Check divisibility by (sum + product)
        int total = sum + prod;

        return n % total == 0;
    }
};