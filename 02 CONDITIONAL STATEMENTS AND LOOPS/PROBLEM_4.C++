/* PRINT FOR LOOP WITHOUT USING initilization; condition; updation;     */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;

    cout<<"PRINTING COUNTING FORM 1 TO "<<n<<endl;
    int i=1;
    for ( ; ; ) {  
        if(i <= n){
        cout<<i<<endl;
        }
        else{
            break;
        }
        i++; 
    }
    
}