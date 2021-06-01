bool isBalanced(Node *root)
{
    //  Your Code here
    int lh; /* for height of left subtree */
    int rh; /* for height of right subtree */
    if (root == NULL)
        return 1;
    lh = height(root->left);
    rh = height(root->right);
 
    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
 
    return 0;

}
