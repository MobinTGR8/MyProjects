#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize the array with the given names and placeholders for remaining slots.
    string NAME[8] = {"Brown", "Davis", "Johnson", "Smith", "Wanger", "", "", ""};
    int n = 5;  // Current number of names in the array

    // Function to insert a name and maintain alphabetical order
    auto insertName = [&](string newName) {
        int i = n - 1;
        while (i >= 0 && NAME[i] > newName) { 
            NAME[i + 1] = NAME[i]; 
            i--; 
        }
        NAME[i + 1] = newName;
        n++;
    };

    // Function to delete a name and maintain order
    auto deleteName = [&](string delName) {
        int i;
        for (i = 0; i < n; i++) {
            if (NAME[i] == delName) break;
        }
        for (; i < n - 1; i++) {
            NAME[i] = NAME[i + 1];
        }
        NAME[n - 1] = "";
        n--;
    };

    // Add "Ford" and "Taylor" to the array
    insertName("Ford");
    insertName("Taylor");

    // Delete "Davis" from the array
    deleteName("Davis");

    // Display the updated array
    cout << "Updated NAME array:\n";
    for (int i = 0; i < n; i++) {
        cout << NAME[i] << endl;
    }

    return 0;
}
