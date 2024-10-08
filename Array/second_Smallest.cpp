#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array should have at least two elements.\n";
        return 1; // Exit if less than 2 elements
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans(2, INT_MIN); // Initialize to INT_MIN for largest values

    for (int i = 0; i < n; i++) {
        if (arr[i] > ans[0]) {
            ans[1] = ans[0]; // Previous largest becomes second largest
            ans[0] = arr[i]; // New largest found
        } else if (arr[i] > ans[1] && arr[i] != ans[0]) {
            ans[1] = arr[i]; // New second largest found
        }
    }

    if (ans[1] == INT_MIN) {
        cout << "No second largest element found.\n"; // Handle case where second largest does not exist
    } else {
        cout << "Second Largest element is: " << ans[1] << endl;
    }

    return 0;
}