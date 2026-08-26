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

    int search(vector<int>& inorder, int left, int right, int target){
        for(int node = left; node<=right; node++){
            if(inorder[node] == target){
                return node;
            }
        }
        return -1;
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& preIdx, int left, int right){
        if(left>right){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[preIdx]);

        int inIdx= search(inorder, left, right, preorder[preIdx]);
        preIdx++;

        root->left = helper(preorder, inorder, preIdx, left, inIdx-1);
        root->right = helper(preorder, inorder, preIdx, inIdx+1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIdx = 0;
        return helper(preorder, inorder, preIdx, 0, inorder.size()-1);
        // void 
        // int i=0;
        // int curr=NULL;
        // int st=0;
        // int end = preorder.size()-1;
        // for(int node=0; node<inorder.size(); node++){
        //     if(preorder.empty()){
        //         return;
        //     }
        //     if(preorder[0]==inorder[node]){
        //         curr=node;
        //         break;
        //     }
        // }
        // buildTree(preorder(vector<int>(preorder.begin()+i, preorder.end()), vector<int>(inorder.begin(), inorder.begin()+curr-1)));
        // buildTree(preorder(vector<int>(preorder.begin()+, preorder.end()), vector<int>(inorder.begin(), inorder.begin()+curr-1)));
    }
};