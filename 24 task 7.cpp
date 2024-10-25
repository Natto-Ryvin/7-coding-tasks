#include<iostream>
using namespace std;
int main()
{
    int val;
    cout<<"Enter the number till which the cube of every number within that range will output: ";
    cin>>val;
    for(int i=1; i<=val; i++)
    {
        cout<<"The cube is: "<<i*i*i<<endl;
    }
}