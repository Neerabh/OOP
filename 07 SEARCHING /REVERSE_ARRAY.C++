#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    
    while (end>=start)
    {
       swap(arr[start],arr[end]);
       start++;
       end--;
    }
    

}

void printarray(int arr[],int n){
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<' ';
     }
     cout<<endl;
}

int main(){

    int arr[6]={1,2323,43,65,67,6};
    int ar[5]={4,43,453,65,765};

    reverse (ar,5);
    reverse (arr,6);

    printarray(ar,5);
    printarray(arr,6);
    
    return 0;
}