#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};


void add_last(struct node *ptr, int data);


int main(int argc, const char* argv){
	
	printf("initializing linked list\n");
	
	struct node *head = NULL;
	head = (struct node*) malloc(sizeof(struct node));	

	printf("linked list has been initialized... \n"
			"Populating linked list now!\n");

	for(int i = 0; i < 32; i++){
		add_last(head, i);
	}

	//print_List(head);

	return 0;
}


void add_last(struct node *head, int data){

	struct node *newNode = (struct node*)malloc(sizeof(struct node*));
	struct node *tmp = NULL;

	newNode->data = data;
	newNode->next = head;

	if(head == NULL){
		head = newNode;
		return;
	} else{
		tmp = head;

		while(tmp->next != NULL){
			tmp = tmp->next;
		}// exits when tmp->next == null

		tmp->next = newNode; // link to the list 
	} 

	free(tmp);
	return;
}



