
package labproblemset06;
class Q25 {
    int val;
    Q25 left;
    Q25 right;

    Q25(int val) {
        this.val = val;
    }
}
public class Q25t{
    public static void main(String[] args) {
        // Create a sample binary tree:
        //       1
        //      / \
        //     2   3
        //    / \
        //   4   5

        Q25 root = new Q25(1);
        root.left = new Q25(2);
        root.right = new Q25(3);
        root.left.left = new Q25(4);
        root.left.right = new Q25(5);

        System.out.println("Preorder traversal of the binary tree:");
        preorderTraversal(root);
    }

    public static void preorderTraversal(Q25 root) {
        if (root == null) {
            return;
        }

        // Process the current node
        System.out.print(root.val + " ");

        // Recursively traverse the left subtree
        preorderTraversal(root.left);

        // Recursively traverse the right subtree
        preorderTraversal(root.right);
    }
}
