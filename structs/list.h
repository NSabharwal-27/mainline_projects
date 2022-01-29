#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct node{
	int data;
	struct node* next;
};

void add_last(struct node **ptr, int data);
void print_list(struct node *ptr);
int isEmpty(struct node *head);

int isEmpty(struct node *head){
    if (head == NULL)
		return 1;
	return 0;
}


void print_list(struct node *head){

	//struct node *temp = head;

	while(head != NULL){
		printf("%d\n", head->data);
		head = head->next;
	}
}


void add_last(struct node **head, int data){	

	struct node *newNode = (struct node*)malloc(sizeof(struct node));

	newNode->data = data;
	newNode->next = NULL;

	if(*head == NULL){
		*head = newNode;
		return;
	}

	struct node *tmp = *head;

	while(tmp->next != NULL)
		tmp = tmp->next;
	// exits when tmp->next == null

	tmp->next = newNode; // link to the list 
	return;
}
