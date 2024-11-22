#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void heapify(vector<int>& heap, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] > heap[largest]) largest = left;
    if (right < n && heap[right] > heap[largest]) largest = right;

    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapify(heap, n, largest);
    }
}

void buildHeap(vector<int>& heap) {
    int n = heap.size();
    for (int i = n / 2 - 1; i >= 0; i--) heapify(heap, n, i);
}

void deleteElement(vector<int>& heap, int value) {
    int n = heap.size();
    auto it = find(heap.begin(), heap.end(), value);
    if (it != heap.end()) {
        int index = distance(heap.begin(), it);
        heap[index] = heap[n - 1];
        heap.pop_back();
        heapify(heap, n - 1, index);
    }
}

int main() {
    vector<int> heap = {44, 30, 50, 22, 60, 55, 77, 55};
    buildHeap(heap);
    
    cout << "Heap after build: ";
    for (int val : heap) cout << val << " ";
    
    deleteElement(heap, 60);
    
    cout << "\nHeap after deleting 60: ";
    for (int val : heap) cout << val << " ";

    return 0;
}
