// JO IST ELEMENT HOGA WOH HAMESHA BIGGEST YAA MIN ELEMENT NIKLEGA
#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> pq;

    // Inserting elements into the priority queue
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(40);

    // Printing the top element of the priority queue
    cout << "Top element: " << pq.top() << endl;

    // Removing elements from the priority queue
    cout << "Removing elements: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
