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
    int m_h=0, ans=0;
    
    void check(TreeNode* root,int h)
    {
        if(root==NULL)
            return ;
        
        check(root->left,h+1);
        check(root->right,h+1);
        
        if(h>m_h)
        {
            m_h=h;
            ans=root->val;
        }  
        return;
    }
    
    int findBottomLeftValue(TreeNode* root)
    {
        check(root,1);
        return ans;
    }
};

// Another approach by calculating height first and might be an issue for bigger trees
/*
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
    int ans=-1;
    bool flag = false;
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        else
            return max(height(root->left),height(root->right))+1;
    }
    void check(TreeNode* root, int level)
    {
        if(root==NULL)
            return;
        if(level==0)
        {
            if(!flag)
            {    
                flag = true;
                ans=root->val;
            }
            return;
        }
        check(root->left, level-1);
        check(root->right, level-1);
    }
    int findBottomLeftValue(TreeNode* root) 
    {
        int h = height(root);
        check(root, h-1);
        return ans;
    }
    
};*/
