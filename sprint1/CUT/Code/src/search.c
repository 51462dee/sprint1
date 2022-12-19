#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../header/phonebook.h"
//Function to search a given contact by its name and number
void search(Node_t *head)
{
	char comp[20];
      int a;
	Node_t* q = head;
	Node_t* p = q->next;
    printf("\n\t Enter 1 to search by name: ");
      printf("\n\tEnter 2 to Search by number: \n");
      scanf("%d",&a);
      switch(a)
      {
           case 1:
                 printf("Enter contact name to be searched:");
                 scanf("%s", comp);
                 while (p != NULL && (strcmp(p->name, comp) != 0))
                  {
                        q = p;
                        p = p->next;
                  }
                  if (NULL == p)
                  {
                        printf("\n\tPlease check as there is no such name in contact!\n\n");
                        return;
                  }
                  else
                  {
                        printf("\n\t\tName\tPhone Number\n");
                        printf("\t\t%s\t\t", p->name);
                        printf("%s\n", p->num);
                  }
                  break;
    
            case 2:
                 printf("Enter contact number to be searched:");
                 scanf("%s", comp);
                 while (p != NULL && (strcmp(p->num, comp) != 0))
                  {
                        q = p;
                        p = p->next;
                  }
                  if (NULL == p)
                  {
                        printf("\n\tPlease check as there is no such number in contact!\n\n");
                        return;
                  }
                  else
                  {
                        printf("\n\t\tName\tPhone Number\n");
                        printf("\t\t%s\t\t", p->name);
                        printf("%s\n", p->num);
                  }
                  break;
       }

	
	
	
}
