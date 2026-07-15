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
    bool fun(TreeNode* p,TreeNode*q){
        if(p==NULL and q==NULL){
            return true;
        }
        if(p==NULL or q==NULL){
            return false;
        }
        if(p->val != q->val){
            return false;
        }
        bool b1=fun(p->left,q->left);
        bool b2=fun(p->right,q->right);
        if(b1==true && b2==true ){
            return true;
        }
        else return false;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool answer=fun(p,q);
        return answer;
        
    }
};