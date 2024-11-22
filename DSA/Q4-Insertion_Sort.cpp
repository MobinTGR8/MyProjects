#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {  // Shift elements until correct position is found
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {29, 10, 14, 37, 13};
    insertionSort(arr);
    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    return 0;
}
