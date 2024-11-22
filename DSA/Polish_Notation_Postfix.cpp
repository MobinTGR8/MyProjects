#include <iostream>
#include <stack>
#include <string>
using namespace std;

int evaluatePostfix(const string& expr) {
    stack<int> s;
    for (char ch : expr) {
        if (isdigit(ch)) {
            s.push(ch - '0');
        } else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            switch (ch) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
            }
        }
    }
    return s.top();
}

int main() {
    string expr = "231*+9-";
    cout << "Result of postfix evaluation: " << evaluatePostfix(expr) << endl;
    return 0;
}
