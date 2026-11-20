/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        //if p and q both are less than the root then they lie in the left subtree fs
        if(root->val > p->val && root->val > q->val){
            return lowestCommonAncestor(root->left,p,q);
        }else if(root->val < p->val && root->val < q->val){//if p and q both are more than the root then they lie in the right subtree fs
            return lowestCommonAncestor(root->right,p,q);
        }else{  //any other case the root is the lca
            return root;
        }

    }
};