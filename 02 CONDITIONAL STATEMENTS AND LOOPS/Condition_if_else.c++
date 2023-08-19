#include <iostream>
using namespace std;

int main() {
  int time = 22;
  if (time < 10) {
    cout << "Good morning.";
  } else if (time < 20) {
    cout << "Good day.";
  } else {                       //considered as default case
    cout << "Good evening.";
  }
  return 0;
}
//this is right way for multiple conditions

//we can use multiple else if conditions 