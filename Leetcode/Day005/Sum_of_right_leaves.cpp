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
    
    void calc(TreeNode* root, bool state)
    {
        if(!root)
            return;
        else
        {
            if(!root->left && !root->right && state==true)
            {   
                ans+=root->val;
                return;
            }
            calc(root->left, false);
            calc(root->right, true);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        if(!root)
            return 0;
        else
            calc(root, false);
        return ans;
    }
};
