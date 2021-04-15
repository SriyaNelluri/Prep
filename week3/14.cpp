// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* curr=head;
        int count=1;
        while(count<k&&curr!=NULL){
            curr=curr->next;
            count++;
        }
        Node* kth=curr;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=head;
        head=kth->next;
        kth->next=NULL;
        return head;
    }
};
