/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // if(root==NULL) return NULL;
        // // if(root->left ==NULL && root->right==NULL) return root;
        // TreeNode* node;
        // node = root->left;
        // root->left = root->right;
        // root->right = node;
        // invertTree(root->left);
        // invertTree(root->right);
        // return root;
        
        
        if(root==NULL) return NULL;
        
        if (root->left == nullptr && root->right == nullptr) {
            return root;
        }
        else if (root->left == nullptr && root->right) {
            root->left = root->right;
            root->right = nullptr;
            invertTree(root->left);
        }
        else if (root->right == nullptr && root->left) {
            root->right = root -> left;
            root->left = nullptr;
            invertTree(root->right);
        }
        else {
            TreeNode* temp = root->left;
            root->left = root->right;
            root->right = temp;
            invertTree(root->left);
            invertTree(root->right);
        }
        return root;
     }
};