#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    cout<<"Size of vector: "<<v.size()<<endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout<<"After pushing elements size of vector: "<<v.size()<<endl;

    for( int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();

    for(int j: v){
        cout<<j<<" ";
    }

    cout<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;
    cout<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;
    return 0;
}