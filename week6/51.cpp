class Solution{
  public:
    // Function should return all the ancestor of the target node
  int ancestor(Node *root,int target,vector<int>&v){
        if(!root)
             return(0);
        if(!root->left and !root->right and root->data==target)
             return(1);
        if(root->data==target)
            return(1);
        
        int l=ancestor(root->left,target,v);
        if(l){
            v.push_back(root->data);
            return(l);
        }
        int r=ancestor(root->right,target,v);
        if(r){
            v.push_back(root->data);
            return(r);
        }
        return(r);

}
    vector<int> Ancestors(struct Node *root, int target)
    {
         // Code here
         vector<int>v;
        if(!root)
         return(v);
        int res=ancestor(root,target,v);
        return(v);
    }
};
