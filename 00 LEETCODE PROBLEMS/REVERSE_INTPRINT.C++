#include <iostream>
using namespace std;

int main() {
    int number, reversed_Number = 0;
    
    cout << "Enter a number: ";
    cin >> number;
    
    while (number != 0) {
        int remainder = number % 10;
        reversed_Number = reversed_Number * 10 + remainder;
        number /= 10;
    }
    
    cout << "The reverse of the number is: " << reversed_Number << endl;
    
    return 0;
}
