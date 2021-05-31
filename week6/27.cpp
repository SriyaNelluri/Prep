void modifyBSTUtil(Node* root, int* sum){
    if (root == NULL)
        return;
    modifyBSTUtil(root->right, sum);
    *sum = *sum + root->data;
    root->data = *sum;
    modifyBSTUtil(root->left, sum);
}
Node* modify(Node *root){
    // Your code here
    int sum = 0;
    modifyBSTUtil(root, &sum);
    return root;
}
