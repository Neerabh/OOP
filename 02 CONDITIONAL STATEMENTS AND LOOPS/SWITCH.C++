#include<iostream>
using namespace std;
int main(){
    
    char ch='1';
    cout<<endl;

    switch (ch)
    {
    case 1 : cout<<"first"<<endl;
        break;  //break is must
        

    case 2 : cout<<"blue ice"<<endl;
        break;

    case '1' : cout<<"yeh case ke baad codition di jaati h"<<endl;
        break;        
    
    default: cout << "this is a default case"<<endl;
        break;
    }
    cout<<endl;
} 