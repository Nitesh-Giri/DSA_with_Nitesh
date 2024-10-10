#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // intializing with custom values
    vector<char> vec = { 'a', 'b', 'c', 'd', 'e' };
    for(int i : vec){
        cout<<i<<" ";
    }

    cout<<endl;

    // intializing with 0
    vector<int> vec2(5 , 0);
    for(int i : vec2){
        cout<<i<<" ";
    }

    cout<<endl; 

    // intializing with user input
    vector<int> v; // Declaring an empty vector
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    cout<<"Enter the elements of vector: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x); // Pushing the elements in the vector
    }
    cout<<"The vector is: ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }  
    cout<<endl;
    return 0;
}