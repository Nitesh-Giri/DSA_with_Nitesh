#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n= 5;
    int arr[5] = {1, -2, -3, 5, 3};

    //method 1 Brute-force approach

    // int maxSum =INT_MIN;
    
    // for(int i=0; i<n; i++){
    //     int currentSum =0;

    //     for(int j=i; j<n; j++){
    //         currentSum += arr[j];
    //         maxSum = max(maxSum, currentSum);
    //     }
    // }

    // cout<<"Maximum subarray sum: "<<maxSum<<endl;


   // method 2 Kadane's Algorithm

    int maxSum = INT_MIN;
    int sum =0;

    for(int i=0; i<n; i++){
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if(sum<0){
            sum =0;
        }
    }

    cout<<"Maximum subarray sum: "<<maxSum<<endl;

    return 0;
}