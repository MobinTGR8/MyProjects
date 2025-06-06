#include <iostream>
using namespace std;

int insert(int arr[], int n, int k, int item) {
    int j = n - 1;
    while (j >= k) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[k] = item;
    return n + 1;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[50] = {1, 2, 3, 4, 5};
    int n = 5; // number of elements in the array
    int k = 2; // position to insert a new value
    int item = 10; // value to insert
    n = insert(arr, n, k - 1, item);
    printArray(arr, n);
}