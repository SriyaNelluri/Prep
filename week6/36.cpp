class Solution{
    public:
    //Function to convert a binary tree into its mirror tree.
    void mirror(Node* root)
    {
         // code here
         if (root == NULL)
            return;
      
        queue<Node*> q;
        q.push(root);
      
       
        while (!q.empty()){
            Node* curr = q.front();
            q.pop();
            swap(curr->left, curr->right);
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }
};
