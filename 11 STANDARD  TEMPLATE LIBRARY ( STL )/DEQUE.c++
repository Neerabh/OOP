#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;

    // Adding elements to the deque
    myDeque.push_back(10);            // Insert at the end
    myDeque.push_front(5);            // Insert at the beginning
    myDeque.push_back(20);
    myDeque.push_front(2);

    // Accessing elements
    std::cout << "Elements in deque: ";
    for (const auto& element : myDeque) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Removing elements
    myDeque.pop_back();               // Remove last element
    myDeque.pop_front();              // Remove first element

    // Modifying elements
    myDeque[1] = 15;                  // Modify element at index 1

    // Size and empty check
    std::cout << "Size of deque: " << myDeque.size() << std::endl;
    std::cout << "Is deque empty? " << (myDeque.empty() ? "Yes" : "No") << std::endl;

    // Accessing front and back elements
    std::cout << "Front element: " << myDeque.front() << std::endl;
    std::cout << "Back element: " << myDeque.back() << std::endl;

    return 0;
}
