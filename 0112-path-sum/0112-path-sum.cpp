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
    int sum=0;
    
    bool fun(TreeNode*root , int targetSum){
        if(root==NULL){
            return false;
        }
        sum = sum +root->val;
        
        if( root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                return true;
            }
            else{
                sum=sum-root->val;
                return false;
            }

        }
       
        if(fun(root->left,targetSum) || fun(root->right,targetSum)){
            return true;
        }
        sum=sum-root->val;
        return false;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return fun(root,targetSum);
    }
};