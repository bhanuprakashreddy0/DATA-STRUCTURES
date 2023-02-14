#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
}*head=NULL,*p,*t,*newnode;

void create(){
	int ele,i,n;
	printf("enter the no of elements:");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		printf("enter the element");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=newnode;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next);
			p->next=newnode;
			p=newnode;
		}
	}
}

void display(){
	if(head==NULL){
		printf("list is empty");
	}
	else{
		for(p=head;p!=NULL;p=p->next)
		printf("%d->",p->data);
	}
}

int main()
{
	int cho;
	do
	{
		printf("\n**menu**\n");
		printf("\n1.create\n2.display\n3.exit\n");
		printf("enter the choice:");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1:create();break;
			case 2:display();break;
			case 3:exit(0);
			default:printf("enter the no b/w 1 to 3:");
		}
	}while(cho>0 && cho<=3);
	
	return 0;
}
