// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
Node* mergeSort(Node* head) {
  if(head==NULL || head->next==NULL)
        return head;
Node* slow=head;
Node* fast=head->next;

while(fast && fast->next){
slow=slow->next;
fast=fast->next->next;
}
Node* newHead=slow->next;
slow->next=NULL;
return merge(mergeSort(head),mergeSort(newHead));
}
Node* merge(Node* l1,Node* l2){
    if(!l1)
        return l2;
    if(!l2)
        return l1;

    if(l1->data<l2->data){
        l1->next=merge(l1->next,l2);
        return l1;
}
    else{
        l2->next=merge(l1,l2->next);
        return l2;
}
}

};
