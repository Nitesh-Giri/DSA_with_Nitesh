#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> &nums){
    int ans =0;

    for(int i=0; i<nums.size(); i++){
        ans = ans^nums[i];
    }

    return ans;
}
int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int ans = singleNumber(nums);
    cout<<"The single number is: "<<ans<<endl;

    return 0;
}