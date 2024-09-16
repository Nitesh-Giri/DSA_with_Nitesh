#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum =0;
    for(int i=0; i<=n; i++){
        if(i%2!=0){
            sum+=i;
        }
    }

    cout<<"Sum of odd numbers till "<<n<<" is "<<sum<<endl;
    return 0;
}