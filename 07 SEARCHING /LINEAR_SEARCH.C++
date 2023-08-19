#include<iostream>
using namespace std;

bool search(int arr[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[10] = {12, 2, 223, 5, 1, 45, 5, 66, 74, 443};
    
    cout << "Enter the number you want to search: ";
    int number;
    cin >> number;
    
    bool found = search(arr, 10, number);
    
    if (found) {
        cout << "Number is present." << endl;
    } else {
        cout << "Number is not present." << endl;
    }

    return 0;
}

