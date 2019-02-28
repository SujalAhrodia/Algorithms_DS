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
    int checkSum(TreeNode* root, int sum)
    {
        if(!root)
            return 0;
        else
            return (root->val==sum) + checkSum(root->left, sum-root->val) + checkSum(root->right, sum-root->val);
    }
    int pathSum(TreeNode* root, int sum) 
    {
        if(!root)    
            return 0;
        else
            return checkSum(root,sum)+pathSum(root->left,sum)+pathSum(root->right,sum);
    }       
};
