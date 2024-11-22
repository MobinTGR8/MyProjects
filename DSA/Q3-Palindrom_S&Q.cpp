#include <iostream>
#include <stack>
#include <queue>
using namespace std;

bool isPalindrome(string text) {
    stack<char> s;
    queue<char> q;
    
    for (char c : text) {
        s.push(c);
        q.push(c);
    }
    while (!s.empty()) {
        if (s.top() != q.front()) return false;
        s.pop();
        q.pop();
    }
    return true;
}
int main() {
    string text;
    cout << "Enter text: ";
    cin >> text;

    if (isPalindrome(text)) cout << "True: It is a palindrome\n";
    else cout << "False: It is not a palindrome\n";
    return 0;
}
