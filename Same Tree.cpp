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
    bool check(TreeNode* p, TreeNode* q)
    {
        if(p==NULL && q==NULL)
            return true;
        if((p==NULL && q!=NULL) || (p!=NULL &&q==NULL))
            return false;
        return (p->val==q->val) && check(p->left,q->left) && check(p->right,q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
       
         if(p==NULL && q==NULL)
            return true;
         return check(p,q);
    }
};
