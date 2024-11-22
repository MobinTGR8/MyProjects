#include <iostream>
#include <stack>
using namespace std;

void pop(stack<int>& s) {
    if (!s.empty()) {
        cout << "Popped " << s.top() << " from the stack.\n";
        s.pop();
    } else {
        cout << "Stack is empty.\n";
    }
}

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    pop(s);
    pop(s);
    pop(s);  // Trying to pop from empty stack
    return 0;
}
