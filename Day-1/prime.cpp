#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    bool isPrime = true;

    if(num <2){
        cout<<"Its not a prime number"<<endl;
    }

    for(int i=2; i<sqrt(num); i++){
        if(num%i == 0){
            isPrime = false;
        }
    }
    
    if(isPrime){
        cout<<num<<" is a prime number"<<endl;
    }else{
        cout<<num<<" is not a prime number"<<endl;
    }

    return 0;

}