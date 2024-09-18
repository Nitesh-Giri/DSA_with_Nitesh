#include<iostream>
using namespace std;

int fact(int x){
    if(x==0 || x==1) return 1;
    return x*fact(x-1);
}

int nCr(int n, int r){

    int result = fact(n)/(fact(r)*fact(n-r));
    return result;
}
int main(){

    int n=8;
    int r=2;

    cout<<nCr(n,r)<<endl;

    return 0;
}