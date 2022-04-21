#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//defining the structure
typedef struct nodetype
{
      int info;
      struct nodetype *next;
}node;

//function prototypes
void CreateEmptyList(node **head);
void TraverseInorder(node *head);
void InsertAtBeginning(node **head, int item);

//main function
void main()
{

    node *head;
    int choice,element,after;
    CreateEmptyList(&head);
    while(1)
    {
	printf("\nOperations available are:\n");
	printf("1.Insert at beginning\n2.Traverse in order");
	printf("Entern choice (1 or 2):");
	scanf("%d",&choice);
	switch(choice)
	{

	    case 1:
		  printf("Enter element:");
		  scanf("%d",&element);
		  InsertAtBeginning(&head, element);
		  break;
	    case 2:
		  if(head==NULL)
		  printf("The list is empty");
		  else
		  {
		     TraverseInorder(head);
		     printf("\nPress any key to continue\n");
		     }
		     getch();
		     break;
	    default:
		   exit(0);
		}
	  }
      }
      //function definations
      void CreateEmptyList(node **head)
      {
	      *head=NULL;
}
void InsertAtBeginning(node **head, int item)
{
	   node *ptr;
	   ptr=(node*)malloc(sizeof(node));
	   ptr->info=item;
	   if(*head==NULL)
		    ptr->next=NULL;
	  else
		ptr->next=*head;
		*head=ptr;

}
void TraverseInorder(node *head)
 {
	  while(head!=NULL)
	  {
	  printf("\n%d", head->info);
	  head= head->next;
	  }
  }