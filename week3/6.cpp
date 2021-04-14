#include <bits/stdc++.h>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};

void deleteList(Node** head){
	Node* current = *head;
	Node* next = NULL;
	while (current != NULL){
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
void push(Node** head, int data){
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = (*head);
	(*head) = new_node;
}

int main(){
	Node* head = NULL;
	push(&head, 1);
	push(&head, 4);
	push(&head, 1);
	push(&head, 12);
	push(&head, 1);
	deleteList(&head);
	cout << "Linked list deleted";
}

