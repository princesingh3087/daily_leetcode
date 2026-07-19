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
    bool sametree(TreeNode*p , TreeNode*q){
        if(p==NULL and q==NULL){
            return true;
        }
        if(p==NULL or q==NULL){
            return false;

        }
        if(p->val != q->val){
            return false;
        }
        bool b1=sametree(p->left,q->left);
        bool b2= sametree(p->right,q->right);
        if(b1==true and b2==true){
            return true;
        }
        else{
            return false;}
   }
   bool subtrees(TreeNode* root , TreeNode*subroot){

    if(subroot==NULL){
        return true;
    }
    if(root==NULL){
        return false;

    }
    if(sametree(root,subroot)){
        return true;
    }
    bool left = subtrees(root->left,subroot);
    bool right =  subtrees(root->right,subroot);
    return left||right;


   }

    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        bool  ans =subtrees(root,subroot);
        return ans;
        
    }
};