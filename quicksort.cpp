#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void quicksort(vector<int>& nums, int low, int high) {
    int n = nums.size();
    if (low >= high)
        return;

    int pivot = nums[low];
    int left = low + 1;
    int right = high;

    while (left <= right) {
        while (left <= high && nums[left] < pivot)
            left++;

        while (right > low && nums[right] > pivot)
            right--;

        if (left < right)
            swap(nums[left], nums[right]);
        else
            break;
    }

    
    swap(nums[low], nums[right]);
    quicksort(nums,low+1,high-1);
    quicksort(nums,right+1,high);

   
}


int main() {
    vector<int> arr = {3, 5, 4, 7, 9, 10};

    quicksort(arr, 0, arr.size() - 1);

    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}
