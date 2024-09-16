#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //mrthod 1

    // int num =1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<num<<" ";
    //     }
    //     num++;
    //     cout<<endl;
    // }

    //method 2

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<(i+1)<<" ";
        }

        cout<<endl;
    }
    return 0;
}