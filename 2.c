#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
	
};
struct node*head,*newnode,*temp;
void insertion()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	if (head==0)
	{
		head=newnode;
	}
	else
	{
	newnode->next=head;
	head=newnode;
    }}
    
void display()
{   
	 temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	   }   

	}    
	


int main()
{
	int i,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("linked list:\n");
	for(i=0;i<=n;i++)
	{
		insertion();
		
	}
	display();
	return 0;
}