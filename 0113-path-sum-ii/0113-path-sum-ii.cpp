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
    vector<int>res;
    vector<vector<int>>ans;
    void fun(TreeNode*root, int targetSum){
        if(root==NULL){
            return;
        }
        sum=sum+root->val;
        res.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                ans.push_back(res);
                
            }
            else{
                sum=sum-root->val;
                res.pop_back();
                return;
            }
            
        }
        fun(root->left,targetSum);
        fun(root->right,targetSum);
        sum=sum- root->val;
        res.pop_back();
        return;

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        fun(root,targetSum);
        return ans;
    }
};