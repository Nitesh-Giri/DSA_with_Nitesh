#include<iostream>
using namespace std;

int main(){
    // Array Defination

    int arr[5] = {10,20,30,40,50};
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;

    // Array Size
    cout<<sizeof(arr)<<endl;

    // Loop for array

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    double arr2[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }

    cout<<"Array elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    return 0;
}