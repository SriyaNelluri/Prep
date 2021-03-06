void insertRange(Node *root, int low, int high, vector<int> &res){
    if(root){
        insertRange(root->left,  low, high, res);
        if(root->data >= low && root->data <= high){
            res.push_back(root->data);
        }
        insertRange(root->right, low, high, res);
    }
}


vector<int> printNearNodes(Node *root, int low, int high){
   vector<int> res;
    insertRange(root, low, high, res);
    return res;
}
