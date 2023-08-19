// visit geeks for geeks

#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;

    // Adding elements to the deque
    myDeque.push_back(10); // Insert at the end
    myDeque.push_front(5); // Insert at the beginning
    myDeque.push_back(15);
    myDeque.push_front(2);

    // Accessing elements
    std::cout << "Front element: " << myDeque.front() << std::endl;
    std::cout << "Back element: " << myDeque.back() << std::endl;

    // Removing elements
    myDeque.pop_back(); // Remove the last element
    myDeque.pop_front(); // Remove the first element

    // Checking if the deque is empty
    if (myDeque.empty()) {
        std::cout << "Deque is empty." << std::endl;
    } else {
        std::cout << "Deque is not empty." << std::endl;
        std::cout << "Size of the deque: " << myDeque.size() << std::endl;
    }

    // Clearing the deque
    myDeque.clear();

    return 0;
}
