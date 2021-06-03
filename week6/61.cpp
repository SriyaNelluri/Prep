node* constructTreeUtil (int pre[], int post[], int* preIndex, int l, int h, int size){

    if (*preIndex >= size || l > h)
        return NULL;

    node* root = newNode ( pre[*preIndex] );
    ++*preIndex;
 

    if (l == h)
        return root;

    int i;
    for (i = l; i <= h; ++i)
        if (pre[*preIndex] == post[i])
            break;
    if (i <= h)
    {
        root->left = constructTreeUtil (pre, post, preIndex, l, i, size);
        root->right = constructTreeUtil (pre, post, preIndex,i + 1, h, size);
    }
 
    return root;
}
