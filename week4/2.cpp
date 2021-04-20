class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        stack <int> s1,s2;
        while(first!=NULL){
            s1.push(first->data);
            first=first->next;
        }
        while(second!=NULL){
            s2.push(second->data);
            second=second->next;
        }
        int carry=0;
        Node* res=NULL;
        while(s1.empty()==false||s2.empty()==false){
            int a=0,b=0;
            if(s1.empty()==false){
                a=s1.top();
                s1.pop();
            }
            if(s2.empty()==false){
                b=s2.top();
                s2.pop();
            }
            int tot=a+b+carry;
            Node* temp=new Node(0);
            temp->data=tot%10;
            carry=tot/10;
            if(res==NULL){
                res=temp;
            }
            else{
                temp->next=res;
                res=temp;
            }
        }
        if(carry!=0){
            Node *temp=new Node();
            temp->data=carry;
            temp->next=res;
            res=temp;
        }
        return res;
    }
};
