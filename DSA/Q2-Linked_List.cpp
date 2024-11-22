#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void insertAtStart(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void insertAfter(Node* head, int pos, int val) {
    Node* temp = head;
    for (int i = 1; temp != nullptr && i < pos; i++) temp = temp->next;
    if (!temp) return;
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteStart(Node*& head) {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd(Node*& head) {
    if (!head) return;
    if (!head->next) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next) temp = temp->next;
    delete temp->next;
    temp->next = nullptr;
}

void deleteNth(Node*& head, int pos) {
    if (pos == 1) {
        deleteStart(head);
        return;
    }
    Node* temp = head;
    for (int i = 1; temp != nullptr && i < pos - 1; i++) temp = temp->next;
    if (!temp || !temp->next) return;
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void display(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node(20);
    head->next = new Node(30);

    insertAtStart(head, 10);    // Insert at start
    insertAtEnd(head, 50);      // Insert at end
    insertAfter(head, 3, 40);   // Insert 40 after 3rd node

    cout << "List after insertions: ";
    display(head);

    deleteStart(head);          // Delete start
    deleteEnd(head);            // Delete end
    deleteNth(head, 3);         // Delete 3rd node

    cout << "List after deletions: ";
    display(head);

    return 0;
}
