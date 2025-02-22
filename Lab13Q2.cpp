#include <iostream>


struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};


void postOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return; 
    }

    
    postOrderTraversal(root->left);

    
    postOrderTraversal(root->right);

    
    std::cout << root->data << " ";
}

int main() {
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    
    std::cout << "Post-order traversal of the tree: ";
    postOrderTraversal(root);
    std::cout << std::endl;

    
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}