
int countLeaves(Node* node)
{
  // Your code here
  if(node == NULL)     
        return 0; 
    if(node->left == NULL && node->right == NULL) 
        return 1;         
    else
        return countLeaves(node->left)+countLeaves(node->right); 
}
