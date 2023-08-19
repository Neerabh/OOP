#include<iostream>
using namespace std;

// output 1 in even
// output 0 in odd
//   function
bool iseven(int a){      
    //odd
     if (a&1)
     {
        return 0;
     }
     return 1;
}

int main(){
    int num;
    cin>>num;
    if (iseven(num))
    {
        cout<<"num is even"<<endl;
    }
    else{
        cout<<"num is odd"<<endl;
    }
    return 0;
}