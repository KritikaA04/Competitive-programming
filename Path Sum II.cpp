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
    void solve(TreeNode* root, int targetSum,vector<vector<int>>&ans,int sum,vector<int>&tp){
        if(!root)return;
        tp.push_back(root->val);
        // for (auto it = tp.begin(); it != tp.end(); ++it)
        // cout << ', ' << *it;
        // cout<<endl;
        sum+=root->val;
        if(sum==targetSum&&root->left==NULL&&root->right==NULL)
        {
            ans.push_back(tp);
            for (auto it = tp.begin(); it != tp.end(); ++it)
        cout << ' ' << *it;
            cout<<endl;
            tp.pop_back();
            for (auto it = tp.begin(); it!=tp.end(); ++it)
        cout << ' ' << *it;
            cout<<endl;
            return;
        }
        cout<<"x"<<" ";
        solve(root->left,targetSum,ans,sum,tp);
        cout<<"y"<<" ";
        solve(root->right,targetSum,ans,sum,tp);
        cout<<"z"<<" ";
        tp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>tp;
        solve(root,targetSum,ans,0,tp);
        return ans;
    }
};