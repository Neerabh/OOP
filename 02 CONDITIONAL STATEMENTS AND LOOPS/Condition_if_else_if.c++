#include <iostream>
using namespace std;

int main() {
  int a;
  cout<<"enter the value of a"<<endl;
  cin>>a;

  if(a>0){
    cout <<"a is a positive number";
  }
  else{
    if(a<0){
        cout<<"a is negative number";
    }
    else{
        cout <<"a is 0";
    }
  }
  return 0;
}

//if there are multple conditions then 
//this is not right way there we should 
//use    (if_elseif)
 