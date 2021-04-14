
#include<bits/stdc++.h>
using namespace std;
 class Node {
public:
        int data;
        Node(int d){
            data = d;
        }
        Node *next;
};

bool isPalin(Node* head){
        Node* slow= head;
        stack <int> s;
        while(slow != NULL){
                s.push(slow->data);
                slow = slow->next;
        }
        while(head != NULL ){
             int i=s.top();
             s.pop();
            if(head -> data != i){
                return false;
            }
           head=head->ptr;
        }
return true;
}
