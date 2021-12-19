#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node* next;
};


int main(int argc, const char* argv){
	
	//create a head;
	struct node* head = NULL;
	head->data = 0;


	//add to the head
	struct node* mid = NULL;
	mid->data = 1;

	
	struct node* last = NULL;
	last->data = 2;
	

	head->next = mid;
	mid->next = last;



	return 0;
}
