#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void main()
{
	struct Node *head=0,*newnode=0,*temp=0;
	int ch;
	clrscr();

	do
	{
		newnode=(struct Node*)malloc(sizeof(struct Node));

		printf("Enter Data");
		scanf("%d",&newnode->data);
		newnode->next=0;

		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Want to continue Y/0 N/1");
		scanf("%d",&ch);
	}while(ch!=1);

	temp=head;
	while(temp!=0)
	{
		printf("\n%d",temp->data);
		temp=temp->next;
	}

	getch();
}