#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../header/phonebook.h"
Node_t* importContacts(Node_t* head)
{
	FILE *fp;
	fp = fopen("./data/contacts.txt", "r");
	if(fp == NULL)
	{
		printf("Contacts does not exist \n");
		return NULL;
	}
	while(1)
	{
		char name[50], number[11];
		if (fscanf(fp, "%s %s", name,number) <= 0)
			break;

		Node_t* newNode = (Node_t *)malloc(sizeof(Node_t));
		if (newNode == NULL)
		{
			printf("Unable to allocate memory for node \n");
			exit(EXIT_FAILURE);
		}
		strncpy(newNode->name, name, 50);
		strncpy(newNode->num, number, 11);
		newNode->next = NULL;
		if (head == NULL)
		{
			head = newNode;
		}
		else if (strcmp(name, head->name) < 0)
		{
			newNode->next = head;
			head = newNode;
		}
		else
		{
			Node_t* prev = head;
			Node_t* cur = head->next;
			while (cur != NULL)
			{				
				if (strcmp(newNode->name, cur->name) < 0)
					break;
				prev = cur;
				cur = cur->next;
			}
			prev->next = newNode;
			newNode->next = cur;
		}
	}
	fclose(fp);
	return head;
}
