#include <iostream>
#include <vector>
using namespace std;

vector<int> unionofarr(vector<int>& arr1, vector<int>& arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0, j = 0;
    vector<int> temp;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            if (temp.empty() || temp.back() != arr1[i]) {
                temp.push_back(arr1[i]);
            }
            i++;
        } else {
            if (temp.empty() || temp.back() != arr2[j]) {
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (temp.empty() || temp.back() != arr1[i]) {
            temp.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2) {
        if (temp.empty() || temp.back() != arr2[j]) {
            temp.push_back(arr2[j]);
        }
        j++;
    }

    return temp;
}

int main() {
    vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 3, 4, 5, 6};

    vector<int> result = unionofarr(arr1, arr2);

    cout << "Union of arrays: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
