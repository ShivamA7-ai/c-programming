#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;

        // Separate positives and negatives
        for (int x : nums) {
            if (x >= 0) positive.push_back(x);
            else negative.push_back(x);
        }

        int p = 0, n = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {   // even index → positive
                nums[i] = positive[p++];
            } else {            // odd index → negative
                nums[i] = negative[n++];
            }
        }
        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, -2, 5, -7, -1, 4};

    vector<int> result = sol.rearrangeArray(nums);

    cout << "Rearranged array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
