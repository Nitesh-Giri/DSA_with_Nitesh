#include<iostream>
using namespace std;

    int sum(int a, int b){
        a+=10;
        b+=20;
        return a+b;
    }
int main(){
    int a =10;
    int b= 20;

    cout<<sum(a,b)<<endl; // here this is a call by value so value will be updated
                         // acording to function
    cout<<a<<" "<<b<<endl; // this is direcct var call in main functuin that's why
                        // the value will be remain same according to there main value
    return 0;
}