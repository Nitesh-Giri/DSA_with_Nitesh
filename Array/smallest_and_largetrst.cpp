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

    for(int i=1;i<n;i++){
        smallest=min(smallest,arr[i]);
        largest=max(largest,arr[i]);
    }


    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest: "<<largest<<endl;

    return 0;
}