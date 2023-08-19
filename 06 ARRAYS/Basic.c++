#include<iostream>
using namespace std;
int main(){

    // declare
    cout<<endl;
    int number[3]={1,35,44};

    //to print a specific index value of array
    cout<< "value at index second is "<<number[2]<<endl<<endl;

    //to print whole array
    int n=3;
    cout<<"printing the array"<<endl;  
    for (int i = 0; i < n; i++)
    {
        cout<<number[i]<<endl;
    }
}