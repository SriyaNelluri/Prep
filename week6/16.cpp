void _deleteTree(node* node) { 
    if (node == NULL) return; 
    _deleteTree(node->left); 
    _deleteTree(node->right); 
    delete node; 
} 
