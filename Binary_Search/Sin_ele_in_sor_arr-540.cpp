#include<iostream>
using namespace std;

int singleNonDuplicate(int arr[], int n) {
    int left =0;
    int right = n-1;
    while(left<right){
        int mid = left + (right-left)/2;

        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                left = mid+2;
            }else{
                right = mid;    
            }
        }else{
            if(arr[mid]==arr[mid-1]){
                left = mid+1;
            }else{
                right = mid;
            }
        }
    }
        return arr[left];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Single element is: "<<singleNonDuplicate(arr, n)<<endl;
    
    return 0;
}