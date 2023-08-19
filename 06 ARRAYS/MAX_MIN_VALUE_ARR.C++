#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int& minVal, int& maxVal) {
    minVal = arr[0];  // Initialize minVal with the first element
    maxVal = arr[0];  // Initialize maxVal with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];  // Update minVal if a smaller element is found
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];  // Update maxVal if a larger element is found
        }
    }
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

    int minVal, maxVal;
    findMinMax(arr, size, minVal, maxVal);

    cout << "Minimum value: " << minVal <<endl;
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}