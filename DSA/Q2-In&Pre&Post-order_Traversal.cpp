#include <iostream>
using namespace std;

// Define the structure for a node in the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Pre-order traversal: Root -> Left -> Right
void preOrderTraversal(Node* node) {
    if (node == nullptr) return;
    cout << node->data << " ";        // Visit the root node
    preOrderTraversal(node->left);     // Visit left subtree
    preOrderTraversal(node->right);    // Visit right subtree
}

// In-order traversal: Left -> Root -> Right
void inOrderTraversal(Node* node) {
    if (node == nullptr) return;
    inOrderTraversal(node->left);      // Visit left subtree
    cout << node->data << " ";         // Visit the root node
    inOrderTraversal(node->right);     // Visit right subtree
}

// Post-order traversal: Left -> Right -> Root
void postOrderTraversal(Node* node) {
    if (node == nullptr) return;
    postOrderTraversal(node->left);    // Visit left subtree
    postOrderTraversal(node->right);   // Visit right subtree
    cout << node->data << " ";         // Visit the root node
}

int main() {
    // Constructing a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    cout << "\n";

    cout << "In-order traversal: ";
    inOrderTraversal(root);
    cout << "\n";

    cout << "Post-order traversal: ";
    postOrderTraversal(root);
    cout << "\n";

    return 0;
}
