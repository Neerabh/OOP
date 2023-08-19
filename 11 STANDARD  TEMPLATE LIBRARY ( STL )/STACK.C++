// LAST IN FIRST OUT
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Accessing the top element of the stack
    cout << "Top element: " << myStack.top() << endl;

    // Checking if the stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Popping elements from the stack
    myStack.pop();

    // Accessing the top element after popping
    cout << "Top element after popping: " << myStack.top() << endl;

    // Size of the stack
    cout << "Size of stack: " << myStack.size() << endl;

    return 0;
}
