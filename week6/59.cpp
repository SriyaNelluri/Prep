int max (int arr[], int strt, int end) { 
    int i, max = arr[strt], maxind = strt; 
    for(i = strt + 1; i <= end; i++) { 
        if(arr[i] > max) { 
            max = arr[i]; 
            maxind = i; 
        } 
    } 
    return maxind; 
} 

node* buildTree (int inorder[], int start, int end) 
{ 
    if (start > end) 
        return NULL; 
    int i = max (inorder, start, end); 

    node *root = newNode(inorder[i]); 
 
    if (start == end) 
        return root; 
  
    root->left = buildTree (inorder, start, i - 1); 
    root->right = buildTree (inorder, i + 1, end); 
  
    return root; 
} 
