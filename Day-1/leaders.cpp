#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of array: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans;
    int leader = arr[n - 1];
    ans.push_back(leader);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= leader) {
            leader = arr[i];
            ans.push_back(leader);
        }
    }

    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
