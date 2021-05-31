
//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> res;
   if (root == NULL)
        return {}; // NULL check
 
    stack<struct Node*> s1; // For levels to be printed from right to left
    stack<struct Node*> s2; // For levels to be printed from left to right

    s1.push(root);

    while (!s1.empty() || !s2.empty()) {
        while (!s1.empty()) {
            struct Node* temp = s1.top();
            s1.pop();
            res.push_back(temp->data);
            if (temp->right)
                s2.push(temp->right);
            if (temp->left)
                s2.push(temp->left);
        }
        while (!s2.empty()) {
            struct Node* temp = s2.top();
            s2.pop();
            res.push_back(temp->data);
            if (temp->left)
                s1.push(temp->left);
            if (temp->right)
                s1.push(temp->right);
        }
    }
    return res;
  
  
}
