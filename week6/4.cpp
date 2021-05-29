class Solution
{
    public:
    //Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root)
    {
        
       // Your code here
       if (root == NULL)
        return 0;
    int result = 0;

    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int count = q.size();
        result = max(count, result);
        while (count--) {
            Node* temp = q.front();
            q.pop();
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
  
    return result;
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string inp;
        getline(cin, inp);
        Node* root = buildTree(inp);
        
        Solution ob;
        cout << ob.getMaxWidth(root) <<endl;
    }
    return 0;
}


  // } Driver Code Ends
