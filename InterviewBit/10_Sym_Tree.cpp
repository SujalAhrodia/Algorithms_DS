/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int check(TreeNode* A, TreeNode* B)
{
    if(!A && !B)
        return 1;
    if(A && B && (A->val == B->val))
    {
        //check mirror condition
        return check(A->left, B->right)&&check(A->right, B->left);
    }
    return 0;
}
int Solution::isSymmetric(TreeNode* A) 
{
    return check(A,A);
}
