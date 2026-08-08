#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s = nums.size();
        vector<int> ne(s);  // result vector
        int first = 0;
        int second = n;

        for (int i = 0; i < n; i++) {
            ne[2*i] = nums[first++];      // element from first half
            ne[2*i + 1] = nums[second++]; // element from second half
        }

        return ne;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    vector<int> result = sol.shuffle(nums, n);

    cout << "Shuffled array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
