class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    struct Node* minValue(struct Node* node){
    struct Node* current = node;
    while (current->left != NULL) {
        current = current->left;
    }
    return current;
}
    Node * inOrderSuccessor(Node *root, Node *n){
        //Your code here
        if (n->right != NULL)
        return minValue(n->right);
 
    struct Node* succ = NULL;
 
    while (root != NULL){
        if (n->data < root->data){
            succ = root;
            root = root->left;
        }
        else if (n->data > root->data)
            root = root->right;
        else
            break;
    }
 
    return succ;
    }
};
