#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int largest = INT_MIN;
    
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }

        //or 

        // largest = max(largest, arr[i]);

    }

    cout<<"Largest element is: "<<largest<<endl;

    return 0;

}