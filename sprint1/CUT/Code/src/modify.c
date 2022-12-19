#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../header/phonebook.h"
void modify(Node_t *head)
{
	char comp[20];
	int choice;
	Node_t *q = head;
	Node_t *p = q->next;
	printf("\n\tEnter the Contact Name to be Modified: ");
	scanf("%s", comp);
	
	while (p != NULL && (strcmp(p->name, comp) != 0))
	{
		q = p;
		p = p->next;
	}
	if (NULL == p)
	{
		printf("\n\tThere is No such Contact!\n\n");
		return;
	}
	else
	{
		printf("\n\t1. Modify Name\n");
		printf("\t2. Modify Number\n");
		printf("\t3. Exit Modification\n");
		printf("\n\tEnter your Choice: ");
		scanf("%d", &choice);
		
		switch (choice)
		{
		case 1:
			printf("\n\tEnter Modified Name: ");
			scanf("%s", p->name);
			
			break;

		case 2:
			while (true)
			{
				printf("\n\tEnter the Modified Phone Number: ");
				scanf("%s", p->num);
				
				if (strlen(p->num) != 10)
				{
					printf("Invalid Phone Number!\n\n");
				}
				else
					break;
			}
			break;
		case 3:
			break;
		}
	}
}