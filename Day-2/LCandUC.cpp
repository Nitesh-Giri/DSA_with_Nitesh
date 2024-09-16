#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"Its a lowercase character"<<endl;
    }else{
        cout<<"Its an uppercase character"<<endl;
    }

    return 0;
}