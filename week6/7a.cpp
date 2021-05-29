

class Solution
{
    public:
    //Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root)
    {
      // Your code here
     vector<int> res;
     stack<Node *> s;
    Node *curr = root;
    while (curr != NULL || s.empty() == false){
        while (curr !=  NULL){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        res.push_back(curr->data);
        curr = curr->right;
 
    } /* end of while */
    return res;
    }
};
