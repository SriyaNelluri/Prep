class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    ListNode *p=head;
    ListNode *new_head=p->next;
    while(true){
        ListNode*q=p->next;
        ListNode *temp=q->next;
        q->next=p;
        if(temp==NULL || temp->next==NULL){
            p->next=temp;
            break;
        }
        p->next=temp->next;
        p=temp;

    }
    return new_head;
    }
};
