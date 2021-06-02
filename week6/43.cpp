class Solution {
public:
void correctBSTUtil( struct Node* root, struct Node** first, struct Node** middle, struct Node** last, struct Node** prev ){
    if( root ){
        correctBSTUtil( root->left, first, middle, last, prev );
        if (*prev && root->data < (*prev)->data){
            if ( !*first ){
                *first = *prev;
                *middle = root;
            }
            else
                *last = root;
        }
        *prev = root;
        correctBSTUtil( root->right, first, middle, last, prev );
    }
}
    void correctBST( struct Node* root )
    {
        // add code here.
        struct Node *first, *middle, *last, *prev;
        first = middle = last = prev = NULL;

        correctBSTUtil( root, &first, &middle, &last, &prev );

        if( first && last ){
            int temp=first->data;
            first->data=last->data;
            last->data=temp;
        }
        
        else if( first && middle ) {
            int temp=first->data;
            first->data=middle->data;
            middle->data=temp;
        }
    }
};
