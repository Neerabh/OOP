/* INCREMENT OPERATOR AND DECREMENT OPEREATOR
 we can write i=i+1;   as   
post increment i++;  
pre increment  ++i;
   i+=1;            */

#include<iostream>
using namespace std;
int main(){
     int i =7;

     cout<< (++i)<<endl;   //pre increment  8
     cout<< (i++)<<endl;   //post incremet  8 ,i=9
     cout<< (i--)<<endl;  //pre decrement   9 ,i=8
     cout<< (--i)<<endl;  //post decrement  7, i=7
}