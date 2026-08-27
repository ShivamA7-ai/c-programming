#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

vector<int> sortedsqrarr(vector<int>& arr) {
    int n = arr.size();

    int left = 0;
    int right = n - 1;

    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {

        if (abs(arr[left]) > abs(arr[right])) {
            ans[i] = arr[left] * arr[left];
            left++;
        }
        else {
            ans[i] = arr[right] * arr[right];
            right--;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {-4, 1, 2, 5, 6};

    vector<int> s = sortedsqrarr(arr);

    for (int a : s) {
        cout << a << " ";
    }

    return 0;
}