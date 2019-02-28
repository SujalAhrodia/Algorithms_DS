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
    int ans=0;
    
    void calc(TreeNode* root)
    {
        if(!root)
            return;
        else
        {
            if(!root->left && !root->right)
                ans+=root->val;
            calc(root->left);
            calc(root->right);
        }
    }
    int sumOfLeaves(TreeNode* root) 
    {
        if(!root)
            return 0;
        else
            calc(root);
        return ans;
    }
};
