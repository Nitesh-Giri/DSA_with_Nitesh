#include <iostream>
#include <vector>
using namespace std;

int searchInRotatedArray(vector<int> &nums, int k) {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == k) return mid;

        // Check if the left half is sorted
        if (nums[start] <= nums[mid]) {
            if (nums[start] <= k && nums[mid] > k) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } 
        // Right half is sorted
        else {
            if (nums[mid] < k && nums[end] >= k) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1; // Element not found
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int k = 3; 

    int ans = searchInRotatedArray(nums, k);
    if (ans != -1) {
        cout << "The element is found at index: " << ans << endl;
    } else {
        cout << "The element is not found in the array." << endl;
    }

    return 0;
}