/* 
	Linked List
	by Martin Fairbanks

	A linked list is data structure that consists of a series of nodes where 
	each node is pointing to the next node in the list. The nodes are stored 
	in non contiguous memory blocks and are there for slower to access 
	than an array that is stored in one contigous memory block. The main 
	advantage when using a linked list is memoy usage, only the minimum 
	memory necessary is occupied.
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct Node Node;           

struct Node
{
	int data;
	//the link, address, of the next node in the linked list
	Node *next;
};

Node* insert(Node *head, int x)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = x;

	//let the node point to the current head so we get a linked list
	//the first node created will point to NULL to mark the end, tail, of the list
	newNode->next = head;
	
	//make the new node the current head
	head = newNode;
	return head;
}

void print(Node *linkedList)
{
	printf("List is: ");

	//traverse the list
	while (linkedList != NULL)
	{
		printf(" %d", linkedList->data);
		//fetch the next node in the list
		linkedList = linkedList->next;
	}
	printf("\n");
}

int main()
{
	//pointer to head node
	Node *linkedList = NULL;

	//build list
	for (int i = 0; i < 20; i += 2)
	{
		linkedList = insert(linkedList, i);
		print(linkedList);
	}

	return 0;
}

