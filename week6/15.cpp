class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        //Your code here
         if (!root)
        return 1;
    queue<Node*> q;
    q.push(root);
  
    int result = INT_MAX;
     int level = 0;

    while (!q.empty()) {
        int size = q.size();
        level += 1;
        while(size > 0){
            Node* temp = q.front();
            q.pop();
            if (temp->left) {
                q.push(temp->left);
                if(!temp->left->right && !temp->left->left){
                    if (result == INT_MAX)
                        result = level;
                    else if (result != level)
                        return 0;                   
                }
            }
              
            if (temp->right){
                q.push(temp->right);
                if (!temp->right->left && !temp->right->right)
                    if (result == INT_MAX)
                        result = level;
                    else if(result != level)
                        return 0;
                     
               }
               size -= 1;
        }   
    }
     
    return 1;
    }
};
