#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node * new()
{
	struct node *temp1;
	temp1 = (struct node*)malloc(sizeof(struct node));
	printf("enter the data to bew entered\n");
	scanf("%d",&temp1->data);
	temp1->link = NULL;
	return temp1;
	
}
struct node* insert(struct node *head)
{	

	struct node *temp1=NULL,*temp2=NULL;
	temp1 = new();
	temp2 = head;
	if(temp2==NULL)
	{
		head = temp1;
		return head;
	}
	else
	{
		while(temp2->link!=NULL)
			temp2 = temp2->link;
		temp2->link = temp1;
		return head;
	}
}

struct node * add_before_end(struct node* head)
{
	struct node * temp= head;
	if(temp==NULL)
	{
		printf("list is empty\n");
		return NULL;
	}
	else if(temp->link==NULL)
	{
		printf("insufficient node for this operation\n at least 2 node should be availabe\n");
		return head;
	}
	else
	{
	struct node *temp1 = head,*temp2;
	while(temp1->link->link!=NULL)
		temp1 = temp1->link;
		temp2 = new();
		temp2->link = temp1->link;
		temp1->link = temp2;
		return head;
	}
	
}
void  print(struct node* head)
{
	struct node *temp = head;
	while(temp)
	{
		printf("%d\t",temp->data);
		temp = temp->link;
	}
}
int main()
{
	struct node *head=NULL;
	int choice;
	while(1)
	{
	printf("1.INSERT\n2.add before end \n3.print\n10.exit\n");
	printf("enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :	head = insert(head);
				break;
		case 2 :	head = add_before_end(head);
				break;
		case 3 :	print(head);
				break;
		case 10: 	exit(0);


	}
	}
}
