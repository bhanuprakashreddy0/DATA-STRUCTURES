#include<stdio.h>
#include<stdlib.h>
#define size 5
int que[100],front=-1,rear=-1;
void enqueue(){
	int ele;
	printf("enter the element:");
	scanf("%d",&ele);
	if(rear==size-1){
		printf("queue is full");
	}
	else
	{
		if(front==-1)
		front=0;
		rear=rear+1;
		que[rear]=ele;
	}
	
	}

void dequeue(){
	int ele;
	if(front==-1 && rear==-1){
		printf("queue is empty");
	}
	else{
		ele=que[front];
	   if(front==rear){
	   	front=-1;
	   	rear=-1;
	   }
	   else{
	   	front=front+1;
	   }
	  	
}
}
void display(){
	int i;
	if(front==-1 && rear==-1){
		printf("queue is empty");
	}
	else{
		for(i=front;i<=rear;i++)
		    printf("%d\n",que[i]);
	}
}
int main()
{
	int cho;
	do
	{
		printf("\n**menu**\n");
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		printf("enter the choice:");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit(0);
			default:printf("enter the no b/w 1 to 4:");
		}
	}while(cho >0 && cho<=4);
	return 0;
}
