#include<iostream>
using namespace std;

int decTobin(int n){
    int ans =0;
    int pow =1;

    while(n>0){
        int rem = n%2;
        ans = ans + rem*pow;
        pow = pow*10;
        n = n/2;
    };
    return ans;
}
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<decTobin(n)<<endl;
    return 0;
}