#include <iostream>
using namespace std;

int main() {
  char ch;
  cout << "Enter a character: ";
  cin >> ch;

  if (ch >= 'A' && ch <= 'Z') {
    cout << "The character is a capital letter";
  }
  else if (ch >= 'a' && ch <= 'z') {
    cout << "The character is a small letter";
  }
  else if (ch >= '0' && ch <= '9') {
    cout << "The character is a numeric value";
  }
  else {
    cout << "The character is not a letter or a numeric value";
  }

  return 0;
}
