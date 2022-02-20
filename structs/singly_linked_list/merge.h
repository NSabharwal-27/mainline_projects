#include <stdio.h>
#include <stdlib.h>

void mergeSort(struct node **head);
struct node* half_split(struct node **head, struct node **first_half, struct node **second_half);


void mergeSort(struct node **head){

    struct node *ptr = *head;
    struct node *first_half = NULL;
    struct node *second_half = NULL;

    if( ptr == NULL || ptr->next == NULL){
        return;
    }

   //half_split(head, &first_half, &second_half);


    return;
}