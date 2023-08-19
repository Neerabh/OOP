#include<iostream>
using namespace std;

// FUNCTION OF PRINTING ARRAY  
void print_array(int arr[], int size){    // DATABASE KA DHAYAN RAKHANA H
    cout<<endl;
    cout<< "printing the array"<<endl;  
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<endl;
    }
}

//main function
int main(){

    // declare
    cout<<endl;
    int number[10]={1,35,44,3,4,66,3,8,0,69};   //not to put size it is bad 
    
    //call fx ( name of array,fill the size of array)
    print_array(number,10);
    return 0;
}

/*  ANOTHER WAY
    int size = sizeof(number) / sizeof(number[0]);
    print_array(number, size);                   */