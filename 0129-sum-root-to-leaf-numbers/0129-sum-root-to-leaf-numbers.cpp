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
    void fun(TreeNode*root,int res){
        if (root==NULL){
            return;
        }
        res=res*10+root->val;
        if(root->right==NULL && root->left==NULL){
            sum=sum+res;
        }
        fun(root->left,res);
        fun(root->right,res);
        return;
    }
    int sumNumbers(TreeNode* root) {
        fun(root,0);
        return sum;
        
    }
};