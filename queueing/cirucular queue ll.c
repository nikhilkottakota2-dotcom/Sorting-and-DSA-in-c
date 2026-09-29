#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int value){
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = value;
	if(front == NULL){
		front = rear = newnode;
		rear->next=front;
	}
	else{
		rear->next = newnode;
		rear = newnode;
		rear->next = front;
	}
	printf("%d inserted\n",value);
}

void dequeue(){
	struct node *temp;
	if(front==NULL){
		printf("Queue is empty\n");
	}
	else if(front == rear){
		temp = front;
		printf("%d deleted\n",front->data);
		front = rear = NULL;
		free(temp);
	}
	else{
		temp = front;
		printf("%d deleted\n",front->data);
		front = front->next;
		rear->next = front;
		free(temp);
	}
}

void display(){
	struct node *ptr;
	if(front == NULL){
		printf("Queue is empty\n");
	}
	else{
		ptr = front;
		printf("Queue Elements:\n");
		do{
			printf("%d",ptr->data);
			ptr=ptr->next;
			printf("\n");
		}
		while(ptr!=front);
	}
}

int main(){
	int choice,value;
	while(1){
		printf("\n QUEUE MENU \n");
		printf("\n1)Enqueue\n 2)Dequeue\n 3)Display\n 4)Exit\n");
		printf("Enter your Choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter value : ");
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
				exit(0);
				break;
			default:
				printf("Invalid Choice\n");
		}
	}
	return 0;
}
