#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "merge.h"

int size = 0; /* track the size of the linked list  need this for the merge sort command later */

int main(int argc, const char* argv){

	int random = 0;
	int max_size = rand() % 30; // randomly size the linked list to keep things fun 
	printf("initializing linked list\n");
	
	struct node *head = (struct node*) malloc(sizeof(struct node));	

	printf("linked list has been initialized... \n"
			"Populating linked list now!\n");

	for(int i = 0; size <= max_size; i++){
		random = (rand() % 100);
		add_last(&head, random);
		size++;
	} // terminates when the size of the list has reached max allowable size of the linked list

	print_list(head);

	//next step is to sort this linked list using merge sort

	mergesort();

	return 0;
}

