#include <iostream>
#include <string>
using namespace std;

int main() {
    string List[10] = {"BBBB", "DDDD", "MMMM", "XXXX"};
    int n = 4;  // Current number of names

    // Function to insert a name alphabetically
    auto insertName = [&](string newName) {
        int i = n - 1;
        while (i >= 0 && List[i] > newName) { 
            List[i + 1] = List[i]; 
            i--; 
        }
        List[i + 1] = newName;
        n++;
    };

    // Function to delete a name
    auto deleteName = [&](string delName) {
        int i;
        for (i = 0; i < n; i++) {
            if (List[i] == delName) break;
        }
        for (; i < n - 1; i++) {
            List[i] = List[i + 1];
        }
        List[n - 1] = "";
        n--;
    };

    // Adding FFFF and ZZZZ
    insertName("FFFF");
    insertName("ZZZZ");

    // Deleting MMMM
    deleteName("MMMM");

    // Display updated array
    cout << "Updated List array:\n";
    for (int i = 0; i < n; i++) {
        cout << List[i] << endl;
    }

    return 0;
}
