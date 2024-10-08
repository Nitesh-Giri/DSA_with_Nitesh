#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    int smallest=INT_MAX;
    int largest=INT_MIN;
    int smallest_index=0;
    int largest_index=0;

    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            smallest_index=i;
        }

        if(arr[i]>largest){
            largest=arr[i];
            largest_index=i;
        }
    }



    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest: "<<largest<<endl;

    cout<<"Smallest index: "<<smallest_index<<endl;
    cout<<"Largest index: "<<largest_index<<endl;

    return 0;
}