#include<iostream>
using namespace std;

int binary_search(int arr[], int size,int key){
    int start=0;
    int end=size-1;

    int mid=(start-end)/2;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
             return mid;
        }

        //right waale part mie jaana h
        if(key>arr[mid]){
            start=mid+1;
        }
        
        else{
            end=mid-1;
        }
        mid=(start+end)/2; 
        //yahn par aagr value 2^32 -1 se 2^32 -1
        //nikalni ho to jab yeh formula apply karingge toh wo galt aaega
        // isi liye formula  < mid=start+(start+end)/2 >   lagana h
    }
    
    return -1;
    

     
}

int main(){

    int even[6]={ 1 ,5,23,66,69,70};
    int odd[5]={1,2,3,4,45};
     
    int index=binary_search(even,6,66);
    cout<<"index of 66 is "<<index<<endl;

    return 0;
}