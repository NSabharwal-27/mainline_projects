#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};


void add_last(struct node **ptr, int data);
void print_list(struct node *ptr);


int main(int argc, const char* argv){
	
	printf("initializing linked list\n");
	
	struct node *head = NULL;
	head = (struct node*) malloc(sizeof(struct node));	

	printf("linked list has been initialized... \n"
			"Populating linked list now!\n");

	for(int i = 0; i < 32; i++){
		add_last(&head, i);
	}

	print_list(head);

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
