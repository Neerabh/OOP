// PRIINT SERIES OF EVEN NO. AND THERE SUM
#include<iostream>
using namespace std;
int main(){
    cout <<"enter the even no. you want to print"<<endl;
    int n;
    cin >> n;

    int i = 0;
    int sum = 0;

    while(i<=n){
        cout << i << " ";
        sum=sum+i;
        i=i+2;
    }
    cout << endl << "sum:" << sum ; 
}