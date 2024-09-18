#include<iostream>
using namespace std;

int sum(int n){
    //method 1 recursively

    return n*(n+1)/2;

    //method 2

    // int sum =0;
    // for(int i=1; i<=n; i++){
    //     sum+=i;
    // }
    // return sum;
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}