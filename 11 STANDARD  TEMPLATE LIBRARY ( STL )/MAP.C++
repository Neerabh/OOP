
#include <iostream>
#include <map>

using namespace std;

int main() {
    // Creating a map of string keys and integer values
    map<string, int> scores;

    // Inserting elements into the map
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Accessing and modifying map elements
    scores["Alice"] += 5;

    // Printing the elements of the map
    cout << "Map elements: ";
    for (const auto& pair : scores) {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;

    // Finding an element in the map
    string target = "Bob";
    auto it = scores.find(target);
    if (it != scores.end()) {
        cout << target << "'s score is " << it->second << endl;
    } else {
        cout << target << " is not found in the map." << endl;
    }

    // Removing an element from the map
    scores.erase("Charlie");

    // Checking if a key exists in the map
    string key = "Dave";
    if (scores.count(key) > 0) {
        cout << key << " is found in the map." << endl;
    } else {
        cout << key << " is not found in the map." << endl;
    }

    // Checking the size of the map
    cout << "Size of the map: " << scores.size() << endl;

    return 0;
}
