#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *pre;
	struct node *next;

}
struct node *new()
{
	struct node* temp = NULL;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("enter the data: ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp->pre=NULL;
	return temp;
}
struct node* insert(struct node * head)
{
	struct node temp1 = NULL,temp2 = head;
	temp1 = new();
	if(head==NULL)
	{
		head = temp1;
	}
	else
	{
		while(temp2!=NULL)
		temp2 = temp2->next;
		temp2 = temp1;

	}
	return head;
}
void print(struct node * head)
{
	struct node * temp1 = head;
	while(temp1)
	{
		printf("%d\n",temp1->data)
		temp1 = temp1->next;
	}
}
int main
{
	struct node *head=NULL;
	printf("1.insert\n2.print\n10.exit\n");
	printf("enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:		insert
	}
	


}
