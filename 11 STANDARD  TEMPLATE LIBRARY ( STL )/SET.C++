// ISME UNIQUE ELEMENT HI STORE HOTE H 
// SAME ELEMENT SIRF EK BAAR HI PRINT HOTA H
//ELEMENT SORTTED ORDER MIE PRINT HOTA H
#include <iostream>
#include <set>

using namespace std;

int main() {
    // Creating a set of integers
    set<int> numbers;

    // Inserting elements into the set
    numbers.insert(5);
    numbers.insert(2);
    numbers.insert(8);
    numbers.insert(1);

    // Printing the elements of the set
    cout << "Set elements: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Finding an element in the set
    int target = 2;
    auto it = numbers.find(target);
    if (it != numbers.end()) {
        cout << target << " is found in the set." << endl;
    } else {
        cout << target << " is not found in the set." << endl;
    }

    // Removing an element from the set
    numbers.erase(8);

    // Printing the elements of the set after removal
    cout << "Set elements after removal: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Checking the size of the set
    cout << "Size of the set: " << numbers.size() << endl;

    return 0;
}