class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node* bintree2listUtil(Node* root){

    if (root == NULL)
        return root;
    if (root->left != NULL) {
        Node* left = bintree2listUtil(root->left);
        for (; left->right != NULL; left = left->right)
            ;
        left->right = root;
        root->left = left;
    }

    if (root->right != NULL) {

        Node* right = bintree2listUtil(root->right);
        for (; right->left != NULL; right = right->left)
            ;
        right->left = root;
        root->right = right;
    }
    return root;
}
 
    Node * bToDLL(Node *root){
        // your code 
    if (root == NULL)
        return root;
    root = bintree2listUtil(root);
    while (root->left != NULL)
        root = root->left;
 
    return (root);
    }
};
