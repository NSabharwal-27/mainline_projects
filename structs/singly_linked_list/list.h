#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

void add_last(struct node **ptr, int data);
void add_first(struct node **ptr, int data);
void print_list(struct node *ptr);
int isEmpty(struct node *head);

int isEmpty(struct node *head){
    if (head == NULL)
		return 1;
	return 0;
}


void print_list(struct node *head){
	struct node *runner = head;
	while(runner != NULL){
		printf("%d\n", runner->data);
		runner = runner->next;
	}
	free(runner);
	return;
}

void add_first(struct node **head, int data){

	struct node *newNode = (struct node*)malloc(sizeof(struct node));

	newNode->data = data;
	newNode->next = NULL;

	if (*head == NULL){
		*head = newNode;
		return;
	}

	newNode->next = *head;
	*head = newNode;

	free(newNode);
	return;
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

	free(tmp);
	return;
}
