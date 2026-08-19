#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long res = 1;
        while (res * res <= x) {
            res++;
        }
        return res - 1;
    }
};

int main() {
    Solution sol;

    int x;
    cout << "Enter a number: ";
    cin >> x;

    int result = sol.mySqrt(x);
    cout << "Square root (integer part) of " << x << " is: " << result << endl;

    return 0;
}
