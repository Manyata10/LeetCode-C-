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
    int findDepth(int depth, TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int maxDepth=0;
        maxDepth=maxDepth<depth?depth:maxDepth;
        int left = findDepth(depth++, root->left);
        int right = findDepth(depth++, root->right);
        return max(left, right)+1;
    }
// dfsHelper(TreeNode* u, )
    int maxDepth(TreeNode* root) {
        int depth=0;
        
        return findDepth(depth, root);
    }
};