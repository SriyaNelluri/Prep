vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>res;
    stack <Node *> s;
    queue <Node *> q;
    q.push(root);
    while (q.empty() == false){
        root = q.front();
        q.pop();
        s.push(root);

        if (root->right)
            q.push(root->right); 
        if (root->left)
            q.push(root->left);
    }
 
    while (s.empty() == false)
    {
        root = s.top();
        res.push_back(root->data);
        s.pop();
    }
    return res;
}
