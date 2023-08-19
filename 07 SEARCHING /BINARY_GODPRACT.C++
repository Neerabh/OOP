#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int even[6] = { 1, 5, 23, 66, 69, 70 };
    int odd[5] = { 1, 2, 3, 4, 45 };

    int index = binary_search(even, 6, 66);
    cout << "Index of 66 is " << index << endl;

    index = binary_search(odd, 5, 45);
    cout << "Index of 45 is " << index << endl;

    return 0;
}
