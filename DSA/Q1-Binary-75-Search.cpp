#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k) {
    int left = 0, right = n - 1, comparisons = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        comparisons++;
        
        if (arr[mid] == k) {
            cout << "Element " << k << " found at index " << mid << endl;
            cout << "Total comparisons made: " << comparisons << endl;
            return mid;
        }
        else if (arr[mid] < k) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    cout << "Element " << k << " not found in the array" << endl;
    cout << "Total comparisons made: " << comparisons << endl;
    return -1;
}

int main() {
    int arr[] = {3, 6, 21, 22, 25, 32, 37, 41, 49, 50, 53, 56, 58, 65, 71, 75};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 71;

    binarySearch(arr, n, k);

    return 0;
}
