#include <iostream>
using namespace std;

int Q(int J, int K) {
    if (J < K) return 5;
    return Q(J - K, K + 2) + J;
}

int main() {
    cout << "Q(12, 7) = " << Q(12, 7) << endl;
    cout << "Q(25, 30) = " << Q(25, 30) << endl;
    cout << "Q(20, 15) = " << Q(20, 15) << endl;
    return 0;
}
