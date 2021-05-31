
class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    bool findPath(Node *root, vector<Node*> &path, int k){
    if (root == NULL) 
      return false;
    path.push_back(root);
    if (root->data == k)
        return true;
    if ( (root->left && findPath(root->left, path, k)) ||(root->right && findPath(root->right, path, k)) )
        return true;
    path.pop_back();
    return false;
}
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       vector<Node*> path1, path2;
    if ( !findPath(root, path1, n1) || !findPath(root, path2, n2))
          return NULL;

    int i;
    for (i = 0; i < path1.size() && i < path2.size() ; i++)
        if (path1[i]->data != path2[i]->data)
            break;
    return path1[i-1];
    }
};
