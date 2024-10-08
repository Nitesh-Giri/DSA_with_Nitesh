#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return i;
        }
    }

    return -1;
}
int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    int index = linearSearch(arr, n, target);

    if(index != -1){
        cout<<"Element found at index: "<<index<<endl;
    }else{
        cout<<"Element not found";
    }
    
    return 0;
}