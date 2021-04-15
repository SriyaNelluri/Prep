#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
Node *kAltReverse(Node *head, int k){
	Node* current = head;
	Node* next;
	Node* prev = NULL;
	int count = 0;
	while (current != NULL && count < k){
	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
	count++;
	}
	if(head != NULL)
	head->next = current;
	count = 0;
	while(count < k-1 && current != NULL ){
	current = current->next;
	count++;
	}
	if(current != NULL)
	current->next = kAltReverse(current->next, k);
	return prev;
}

void push(Node** head_ref, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);	
	(*head_ref) = new_node;
}
void printList(Node *node)
{
	int count = 0;
	while(node != NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
		count++;
	}
}

int main(void){

	Node* head = NULL;
	int i;

	for(i = 15; i > 0; i--)
	push(&head, i);

	cout<<"Given linked list \n";
	printList(head);
	head = kAltReverse(head, 3);

	cout<<"\n Modified Linked list \n";
	printList(head);
	return(0);
}


