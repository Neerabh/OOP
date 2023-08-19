#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];  // Add each element to the sum
    }

    return sum;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sum = calculateSum(arr, size);

    cout << "Sum of the numbers: " << sum << endl;

    return 0;
}
