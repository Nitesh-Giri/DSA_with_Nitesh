#include<iostream>
using namespace std;

int sumOfDigit(int n){

    //method 1 recursively
    // if(n==0)
    //     return 0;
    // return (n%10) + sumOfDigit(n/10);

    //method 2
    int sum =0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }

    return sum;
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of digits of "<<n<<" is "<<sumOfDigit(n)<<endl;

    return 0;
}