#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

void insertionSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
}

int main() {
    const int SIZE = 1000;
    vector<int> arr(SIZE);
    srand(time(0));

    // Fill array with random values
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 1000;
    }

    // Measure time for insertion sort
    vector<int> arrCopy = arr;
    clock_t start = clock();
    insertionSort(arrCopy);
    clock_t end = clock();
    double insertionTime = double(end - start) / CLOCKS_PER_SEC;
    cout << "Insertion Sort Time: " << insertionTime << " seconds" << endl;

    // Measure time for selection sort
    arrCopy = arr;
    start = clock();
    selectionSort(arrCopy);
    end = clock();
    double selectionTime = double(end - start) / CLOCKS_PER_SEC;
    cout << "Selection Sort Time: " << selectionTime << " seconds" << endl;

    return 0;
}
