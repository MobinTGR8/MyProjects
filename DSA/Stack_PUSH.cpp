#include <iostream>
#include <stack>
using namespace std;

void push(stack<int>& s, int value) {
    s.push(value);
    cout << "Pushed " << value << " to the stack.\n";
}

int main() {
    stack<int> s;
    push(s, 10);
    push(s, 20);
    return 0;
}
