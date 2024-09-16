#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    for(int i=0; i<num; i++){
        for(int j=1; j<=num; j++){
            cout<<j;
            if(j<num){
                cout<<" ";
            }
        }
        cout<<endl;
    }

   
    return 0;
}