#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //method 1
    // for(int i=1; i<=n*n; i++){
    //     cout<<i<<" ";
    //     if(i%n==0){
    //         cout<<endl;}
    // }

    //methd 2

    int num =1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<num<<" ";
            num++;
        }

        cout<<endl;
    }
    return 0;
}