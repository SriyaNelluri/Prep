void mergeList(struct Node **p, struct Node **q){
     // Code here
 Node* temp1 = *p,*temp2 = *q,*prev = NULL;
 Node* nex1 = NULL,*nex2 = NULL;

 while(temp1 != NULL && temp2 != NULL){
    nex1 = temp1 -> next;
    nex2 = temp2 -> next;
    temp1 -> next = temp2;
    temp2 -> next = nex1;
    temp1 = nex1;
    temp2 = nex2;
    }
*q = temp2;
}
