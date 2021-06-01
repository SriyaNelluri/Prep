int isSumProperty(struct node* node){
    int left_sum = 0, right_sum = 0;
    if(node == NULL ||(node->left == NULL &&  node->right == NULL))
        return 1;
    else{
        if(node->left != NULL)
         left_data = node->left->data;
        if(node->right != NULL)
          right_data = node->right->data;
        if((node->data == left_data + right_data)&& isSumProperty(node->left) && isSumProperty(node->right))
          return 1;
        else
          return 0;
    }
}
