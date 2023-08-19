#include<iostream>
#include<unordered_set>
using namespace std;

void findUniqueElements(int arr[], int size) {
    unordered_set<int> uniqueElements;

    for (int i = 0; i < size; i++) {
        // If the element is not present in the set, add it
        if (uniqueElements.find(arr[i]) == uniqueElements.end()) {
            uniqueElements.insert(arr[i]);
        }
    }

    cout << "Unique elements in the array: ";
    for (int element : uniqueElements) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 6, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findUniqueElements(arr, size);

    return 0;
}
