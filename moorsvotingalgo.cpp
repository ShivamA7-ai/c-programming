#include<iostream>
#include<vector>
using namespace std;
//moors voting algo
int majorityelement(vector<int>& arr) {
    int cnt = 0;
    int el = 0;

    // Step 1: Find candidate
    for (int i = 0; i < arr.size(); i++) {
        if (cnt == 0) {
            el = arr[i];
            cnt = 1;
        } else if (arr[i] == el) {
            cnt++;
        } else {
            cnt--;
        }
    }

    // Step 2: Verify candidate
    cnt = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == el) cnt++;
    }

    if (cnt > arr.size() / 2) return el;
    return -1; // No majority element
}

int main() {
    vector<int> arr = {4,5,4,0,7,5,84,2,6,5,4,7,4};
    int s = majorityelement(arr);
    cout << "Majority element is: " << s << endl;
    return 0;
}
