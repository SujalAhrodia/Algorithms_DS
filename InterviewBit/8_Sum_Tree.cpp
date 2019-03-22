/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// Should return true if tree is Sum Tree, else false
int compute(Node* root)
{
    if(!root)
        return 0;
    
    int sum=root->data+compute(root->left)+compute(root->right);
    return sum;
}

bool isSumTree(Node* root)
{
    if(!root || (!root->left && !root->right) )
        return 1;
    
    int l=compute(root->left);
    int r=compute(root->right);
    
    if((root->data==l+r)&&(isSumTree(root->left)&&isSumTree(root->right)))
        return 1;
    
    return 0;
    
}
