// IST IN IST OUT
#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Create a queue of integers
    queue<int> myQueue;

    // Inserting elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);

    // Getting the size of the queue
    cout << "Size of the queue: " << myQueue.size() << endl;

    // Accessing the front and back elements of the queue
    cout << "Front element: " << myQueue.front() << endl;
    cout << "Back element: " << myQueue.back() << endl;

    // Checking if the queue is empty
    if (myQueue.empty()) {
        cout << "The queue is empty." << endl;
    } else {
        cout << "The queue is not empty." << endl;
    }

    // Removing elements from the queue
    myQueue.pop();
    myQueue.pop();

    // Getting the new front element of the queue
    cout << "New front element: " << myQueue.front() << endl;

    // Getting the size of the queue after removal
    cout << "Size of the queue after removal: " << myQueue.size() << endl;

    return 0;
}
