class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
        stack<Node *> s1, s2;
        Node *rootFwd = root, *rootBwd = root;
  
        while (1){
            if (rootFwd)
            {
                s1.push(rootFwd);
                rootFwd = rootFwd->left;
            }
            else if (rootBwd){
                s2.push(rootBwd);
                rootBwd = rootBwd->right;
            }
            else if (s1.size() && s2.size()){
                rootFwd = s1.top();
                rootBwd = s2.top();
                if (rootFwd->data > rootBwd->data)
                    return false;
                if (rootFwd == rootBwd)
                    return false;
                if (rootFwd->data + rootBwd->data == target)
                    return true;
                else if (rootFwd->data + rootBwd->data < target) 
                {
                    rootFwd = rootFwd->right;
                    s1.pop();
                    rootBwd = NULL; 
                }
                else if (rootFwd->data + rootBwd->data > target)
                {
                    rootBwd = rootBwd->left;
                    s2.pop();
                    rootFwd = NULL; 
                }
            }
            else
                return false;
        }
    }
};
