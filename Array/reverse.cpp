#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int l =0;
    int r = n-1;
    while(l<r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}


int main(){

    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter element of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The original array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //first method
    // cout<<"The reversed array is: ";
    // for(int i=n-1; i>=0; i--){
    //     cout<<arr[i]<<" ";
    // }

    //second method
    reverse(arr, n);
    cout<<"The reversed array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    cout<<endl;
    return 0;
}