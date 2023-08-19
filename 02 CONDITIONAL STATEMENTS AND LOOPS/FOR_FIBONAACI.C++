#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
   
    int a=0;
    int b=1;
    cout<<"series is"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    for (int i = 1; i <= n; i++)
     {
       int next_num=a+b;
       cout<<next_num<<endl;
       a=b;
       b=next_num;
     }
    
}