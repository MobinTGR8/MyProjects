#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int evaluatePostfix(const vector<string>& expression) {
    stack<int> s;
    for (const auto& token : expression) {
        if (isdigit(token[0])) {
            s.push(stoi(token));
        } else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            switch (token[0]) {
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
    vector<string> expression = {"3", "1", "+", "2", "1", "7", "4", "-", "2", "*", "+", "5", "-"};
    cout << "Result of postfix evaluation: " << evaluatePostfix(expression) << endl;
    return 0;
}
