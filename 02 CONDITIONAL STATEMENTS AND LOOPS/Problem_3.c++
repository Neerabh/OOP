// NO. IS PRIME OR NOT
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=2;
      
    while(n>i){
        if(n%i==0){
        cout<<"not prime for " << i <<endl;
    }
    else{
        cout<<"prime for "<< i <<endl;
    }
    i=i+1;
    }
} 