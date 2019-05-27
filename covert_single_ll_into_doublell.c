#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
	struct node *prev;
};
struct node * new()
{
	struct node * temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("enter your data : ");
	scanf("%d",&temp->data);
	temp->link = NULL;
	return temp;

}
struct node * insert(struct node * head)
{
	struct node *temp1=NULL,*temp2=NULL;
	temp1 = new();
	temp2 = head;
	if(temp2==NULL)
	{
		head =temp1;
		return temp1;
	} 
	else
	{
		while(temp2->link!=NULL)
			temp2 = temp2->link;
		temp2->link = temp1;
		//temp3 = temp1;
		return head;
	}
}
struct node* Double(struct node * head)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return head;
	}
	if(head->link==NULL)
	{
		printf("only one element is present\n");
		return head;
	}
	else
	{	
		struct node *pre=NULL,*next=NULL;
		next = head;
	
		while(next->link!=NULL)
		{
			pre = next;
			next = next->link;
			next->prev = pre;
		}
		next->link = head; 
		head->prev=NULL;
	}

}
void  print(struct node * head)
{
	struct node * temp = head,*temp1=head;
	if(temp == NULL)
	{
		printf("list is empty\n");
			return;
	}
	while(temp->link!=head)
	{
		printf("%d\t",temp->data);
		temp = temp->link;
		if(temp==NULL)
			break;
		if(temp->link==head)
			printf("%d",temp->data);
		
	}
}
void backword(struct node *temp1,struct node *temp2)
{ 
	if(temp1==NULL)
		return;
	if(temp1->link==temp2)
		return;
	backword(temp1->link,temp2);
		printf("%d\t",temp1->data);

		

}
int main()
{                         
	struct node *head=NULL,*head1=NULL;
	int choice;
	while(1)
	{
	printf("=============Menu============\n");
	printf("1.insert\n2.print\n3.Double\n4.backword\n10.exit\n");
	printf("enter your choice : \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :	head = insert(head);
				head1 = head;
				break;
		case 2 : 	print(head);
				break;
		case 3 : 	Double(head);
				break;
		case 4 :	backword(head,head1);
				break;
		case 10:	exit(0);


	}
	}

}
