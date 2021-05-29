vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> res;
    if (root == NULL)
        return {0};
    stack<Node*> s;
    s.push(root);
    while (s.empty() == false) {
        struct Node* node = s.top();
       res.push_back(node->data);
        s.pop();
        if (node->right)
           s.push(node->right);
        if (node->left)
            s.push(node->left);
    }
    return res;

}
