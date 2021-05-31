int minValue(Node* root)
{
    // Code here
    struct Node* current = root; 

while (current->left != NULL) { 
    current = current->left; 
} 
return(current->data);
}
