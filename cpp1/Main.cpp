#include <iostream>  
  
// Define a node structure for the BST  
struct TreeNode {  
    int value;  
    TreeNode* left;  
    TreeNode* right;  
  
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}  
};  
  
// Function to insert a node into the BST  
TreeNode* insert(TreeNode* root, int value) {  
    // If the tree is empty, create a new node  
    if (root == nullptr) {  
        return new TreeNode(value);  
    }  
  
    // Otherwise, recur down the tree  
    if (value < root->value) {  
        root->left = insert(root->left, value);  
    } else if (value > root->value) {  
        root->right = insert(root->right, value);  
    }  
  
    // Return the unchanged root pointer  
    return root;  
}  
  
// Function for in-order traversal of the BST  
void inorderTraversal(TreeNode* root) {  
    if (root != nullptr) {  
        inorderTraversal(root->left);         // Traverse the left subtree  
        std::cout << root->value << " ";      // Visit the node  
        inorderTraversal(root->right);        // Traverse the right subtree  
    }  
}  
  
int main() {  
    // Define the elements to be inserted into the BST  
    int elements[] = {8, 3, 1, 6, 7, 10, 14, 4};  
    int numberOfElements = sizeof(elements) / sizeof(elements[0]);  
  
    // Create an empty BST  
    TreeNode* root = nullptr;  
  
    // Insert elements into the BST  
    for (int i = 0; i < numberOfElements; ++i) {  
        root = insert(root, elements[i]);  
    }  
  
    // Perform in-order traversal and print the elements  
    std::cout << "In-order traversal of the BST: ";  
    inorderTraversal(root);  
    std::cout << std::endl;  
  
    return 0;  
}  
