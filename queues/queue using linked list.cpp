#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}; 

struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int x){
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = x;
	newnode->next = NULL;
	if(front == NULL && rear == NULL){
		front = rear = newnode;
		printf("%d enqueued\n",rear->data);
	}
	else{
		rear->next=newnode;
		rear=newnode;
		printf("%d enqueued\n",rear->data);
	}
}

void dequeue(){
	struct node *temp;
	if(front == NULL){
		printf("Underflowed\n");
	}
	else{
		temp = front;
		printf("%d dequeued\n",front->data);
		front= front->next;
		free(temp);
	}
}

void display(){
	struct node *temp;
	temp = front;
	if(front == NULL){
		rear = NULL;
		printf("Queue is empty\n");
	}
	else{
		while(temp!=NULL){
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}

int main(){
	int choice,value;
	printf("\n---Queue Menu---\n");
	printf("1)Enqueue\n2)Dequeue\n3)Display\n4)Exit\n");
	do{
		printf("Enter choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter value :");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Program Terminated\n");
				break;
			default:
				printf("Invalid Choice\n");
		}		
	}while(choice!=4);
}
