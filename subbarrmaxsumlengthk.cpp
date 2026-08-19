#include<iostream>
#include<vector>
using namespace std;

int subbarrmaxsumlengthk(vector<int> &arr, int k) {
    int left = 0, right = 0;
    int maxlen = 0;
    int sum = 0;
    int n = arr.size();

    while(right < n) {
        sum += arr[right];  

        // shrink window if sum exceeds k
        while(left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }

        
        if(sum == k) {
            maxlen = max(maxlen, right - left + 1);
        }

        right++;
    }
    return maxlen;
}

int main() {
    vector<int> arr = {1,2,3,6,5,4,8,7,9};
    int s = subbarrmaxsumlengthk(arr, 4);
    cout << s;
    return 0;
}
