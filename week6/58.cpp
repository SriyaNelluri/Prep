class Solution{
    public:
    int idx=0;
    int find(int in[] , int start , int end , int root){
            for(int i=start;i<=end;i++){
                if(in[i]==root){
                    return i;
                }
            }
    }
    Node *tree(int in[],int pre[],int i ,int n){
        if(i>n){
            return NULL;
        }
        int root=pre[idx++];
        Node *temp=new Node(root);
        temp->left=NULL;
        temp->right==NULL;
        if(i==n)
            return temp;
        int pos=find(in,i,n,root);
        temp->left=tree(in,pre,i,pos-1);
        temp->right=tree(in,pre,pos+1,n);
        return(temp);
        }
   

    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        idx=0;
        return(tree(in,pre,0,n-1));
    }
};
