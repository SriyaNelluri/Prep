// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

// task is to complete this function
struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}

// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// task is to complete this function
// function should return head to the list after making 
// necessary arrangements
struct Node* arrange(Node *h)
{
   //Code here
   Node *head=h;
  Node *vowel=NULL,*link=NULL;
  Node *cons=NULL,*li=NULL;
while(head!=NULL){
if(head->data=='a' || head->data=='e' ||head->data=='i' ||head->data=='o' ||head->data=='u'){
      if(vowel==NULL){
        vowel=head;
        link=vowel;
        }
      else{
        link->next=head;
        link=link->next;
        }
    }
    else{
      if(cons==NULL){
        cons=head;
        li=cons;
        }
      else{
        li->next=head;
        li=li->next;
        }
      }
head=head->next;
}
if(vowel==NULL || cons==NULL){
return h;
}
else{
link->next=cons;
li->next=NULL;
return vowel;
}
}
