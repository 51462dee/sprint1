#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../header/phonebook.h"
void insert(Node_t *head)
{
	Node_t* q = head;
	Node_t* p = q->next;
	
	Node_t *new_node = (Node_t*)malloc(sizeof(Node_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Unable to allocate memory for node \n");
		return;
	}


	printf("\n\tEnter Name: ");
	scanf("%s", new_node->name);

	//check whether the phone number has correct number of digits
	while(true)
	{
		/* code */
		printf("\tEnter Phone Number: ");
		scanf("%s", new_node->num);
		if (strlen(new_node->num) != 10)
		{
			printf("\n\tInvalid Phone Number!\n\n");
                  
		}
		else
			break;
	}
            printf("hi");
            
		while (q!=NULL)
		{
				q = q->next;
		}
		q->next = new_node;
            
            return;
	
}