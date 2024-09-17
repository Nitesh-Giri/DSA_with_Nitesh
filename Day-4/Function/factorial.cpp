#include<iostream>
using namespace std;

int fact(int n){

    //method 1;

    // if(n==0 || n==1)
    //     return 1;
    // return n*fact(n-1);

    //metho 2

    int fact =1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}