#include <iostream>
#include <vector>
using namespace std;

vector<int> sort012(vector<int>& arr) {
    int n = arr.size();
    int count0 = 0, count1 = 0, count2 = 0;

    // Count occurrences
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else if (arr[i] == 2) count2++;
    }

    
    int index = 0;
    for (int i = 0; i < count0; i++) arr[index++] = 0;
    for (int i = 0; i < count1; i++) arr[index++] = 1;
    for (int i = 0; i < count2; i++) arr[index++] = 2;

    return arr;
}

int main() {
    vector<int> array = {1,1,2,2,2,0,0,0,1,0};
    vector<int> s = sort012(array);

    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    return 0;
}
