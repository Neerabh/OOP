#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a list of integers
    list<int> myList;

    // Add elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Iterate over the list and print the elements
    cout << "List elements: ";
    for (int num : myList) {
        cout << num << " ";
    }
    cout << endl;

    // Check if the list is empty
    if (myList.empty()) {
        cout << "List is empty." << endl;
    } else {
        cout << "List is not empty." << endl;
    }

    // Access the first and last elements of the list
    cout << "First element: " << myList.front() << endl;
    cout << "Last element: " << myList.back() << endl;

    // Insert an element at a specific position
    auto it = myList.begin();
    advance(it, 1);  // Move iterator to the second position
    myList.insert(it, 15);

    // Remove an element from the list
    myList.remove(20);

    // Print the updated list
    cout << "Updated list elements: ";
    for (int num : myList) {
        cout << num << " ";
    }
    cout << endl;

    // Clear the list
    myList.clear();

    // Check if the list is empty again
    if (myList.empty()) {
        cout << "List is empty." << endl;
    } else {
        cout << "List is not empty." << endl;
    }

    return 0;
}
