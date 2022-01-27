#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main(int argc, const char* argv){

	int random = 0;
	int size = 0; /* track the size of the linked list  need this for the merge sort command later */
	printf("initializing linked list\n");
	
	struct node *head = (struct node*) malloc(sizeof(struct node));	

	printf("linked list has been initialized... \n"
			"Populating linked list now!\n");



	for(int i = 0; size <= 100; i++){
		random = (rand() % 100);
		add_last(&head, random);
		size++;
	} // terminates when the size of the list has reached max allowable size of the linked list

	print_list(head);

	return 0;
}

