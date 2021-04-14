#include<bits/stdc++.h>
void printMiddle(struct Node *head){
    struct Node *slow = head;
    struct Node *fast= head;
    if (head!=NULL){
        while (fast_ptr != NULL && fast_ptr->next != NULL){
            fast= fast->next->next;
            slow= slow->next;
        }
        printf("The middle element is [%d]\n", slow_ptr->data);
    }
   else{
      printf("no middle element \n");
   }
} 
