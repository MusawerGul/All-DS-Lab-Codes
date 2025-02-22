#include <iostream>


struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};


void preOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
        
    }

    
    std::cout << root->data << " ";
	    
    preOrderTraversal(root->left);
   
    preOrderTraversal(root->right);
}

int main() {
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    
    std::cout << "Pre-order traversal of the tree: ";
    preOrderTraversal(root);
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