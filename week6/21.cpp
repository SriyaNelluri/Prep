void findKDistance(Node *root, int k, vector<int> &res){
    if(root == NULL){
        return;
    }
    
    if(k == 0){
        res.push_back(root->data);
    }
    else{
        findKDistance(root->left,  k-1, res);
        findKDistance(root->right, k-1, res);
    }

}

vector<int> Kdistance(struct Node *root, int k){
   vector<int> res;
   findKDistance(root, k, res);
    return res;
}
