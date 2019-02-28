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
    vector<vector<int>> ans;
    //vector<int>& temp refers to the same temp vector instead of creating seperate copies at each recursive call
    void check(TreeNode* root, int sum, vector<int>& temp)
    {
        if(!root)
            return;
        
        temp.push_back(root->val);
        
        if(!root->left && !root->right)
        {
            if(root->val==sum)
                ans.push_back(temp);
            temp.pop_back(); //removing the leaf nodes
            return;
        }   
        check(root->left, sum-root->val,temp);
        check(root->right, sum-root->val,temp);
        temp.pop_back(); // remove the node once done with it's child nodes
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) 
    {
        vector<int> temp;
        check(root, sum, temp);
        return ans;
    }
    
};
