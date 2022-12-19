#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../header/phonebook.h"

// Function to Traverve through the linked list and display the contents of each node
void display(Node_t *head)
{
	Node_t* p = head;
	if (NULL == p)
	{
		printf("\n\tPhonebook has No Contacts!\n\n");
		return;
	}

	printf("\n\t\tName\t\tPhone Number\n");
	while (p != NULL)
	{
		printf("\t\t%s\t\t", p->name);
		printf("%s\n", p->num);
		p = p->next;
	}
}