#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //mrthod 1


    for(int i=0; i<n; i++){
        for(int j=i+1; j>=0; j--){
            cout<<(j+1)<<" ";
        }

        cout<<endl;
    }
    return 0;
}