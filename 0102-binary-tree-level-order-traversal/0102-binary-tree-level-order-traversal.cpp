#include<queue>
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> output;
        queue<TreeNode*> Q;

        if(root==NULL) return output;
        Q.push(root);

        while(!Q.empty()){

            int n = Q.size();

            vector<int> level;

            for(int i=0; i<n; i++){

                TreeNode* u = Q.front();
                Q.pop();
                level.push_back(u->val);
                if(u->left){
                    Q.push(u->left);
                }
                if(u->right){
                    Q.push(u->right);
                }
            }
            output.push_back(level);

        }
        return output;
    }
};