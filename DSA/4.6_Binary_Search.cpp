#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int item) {
    int lower_bound = 0;
    int upper_bound = n - 1;
    while (lower_bound <= upper_bound) {
        int mid = (lower_bound + upper_bound) / 2;
        if (arr[mid] == item) {
            return mid;
        } else if (arr[mid] < item) {
            lower_bound = mid + 1;
        } else {
            upper_bound = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 2, 39, 4, 25};
    int item = 39;
    cout << binarySearch(arr, sizeof(arr) / sizeof(int), item) << endl;
    return 0;
}