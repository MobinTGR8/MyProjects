#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int item) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == item) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 2, 39, -4, 25};
    int item = 25;
    cout << linearSearch(arr, sizeof(arr) / sizeof(int), item) << endl;
    return 0;
}