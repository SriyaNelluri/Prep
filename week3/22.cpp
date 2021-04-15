bool isSumSorted(struct Node *headA, struct Node *headB, struct Node *headC, int givenNumber){
    struct Node *a = headA;
    while (a != NULL){
        struct Node *b = headB;
        struct Node *c = headC;
        while (b != NULL && c != NULL){
            int sum = a->data + b->data + c->data;
            if (sum == givenNumber){
               return true;
            }
            else if (sum < givenNumber)
                b = b->next;
            else
                c = c->next;
        }
        a = a->next;  
    }
    return false;
}
