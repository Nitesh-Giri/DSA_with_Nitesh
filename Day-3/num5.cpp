#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int num =1;

    //method 1;


    // for(int i=n; i>=0; i--){
    //     for(int j=0; j<i; j++){
    //         cout<<num<<" ";
    //     }
    //     num++;
    //     cout<<endl;
    // }

    //method 2

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        for(int k=0; k<n-i; k++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}