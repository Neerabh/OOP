#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 0;
    int sum = 0;
    
    while(i<=n){
        i=i+1;
        sum=sum+i;
        cout << i <<" ";
    }
    cout << endl <<"sum of n number is:"<< sum <<" ";
}
