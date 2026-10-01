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
	newnode->data=x;
	newnode->next=NULL;
	if(front==NULL&&rear==NULL){
		front=rear=newnode;
		printf("%d enqueued\n",rear->data);
	}
	else{
		rear->next=newnode;
		rear = newnode;
		rear->next = front;
		printf("%d Enqueued\n",rear->data);
	}
}
void dequeue(){
	struct node *temp;
	temp = front;
	if(front==NULL&&rear==NULL){
		printf("Queue is Empty\n");
	}
	else if(front==rear){
		printf("%d dequeued\n",front->data);
		front=rear=NULL;
		free(temp);
	}
	else{
		front=front->next;
		rear->next=front;
		printf("%d dequeued\n",temp->data);
		free(temp);
	}
}

void display(){
	struct node *temp;
	temp=front;
	if(front==NULL&&rear==NULL){
		printf("Queue is Empty\n");
	}
	while(temp->next!=front){
		printf("%d\t",temp->data);
		temp = temp->next;
	}
	printf("%d\n",temp->data);
}

int main(){
	int choice,value;
	printf("\n---Queue Menu---\n");
	printf("1)Enqueue\n2)Dequeue\n3)Display\n4)Exit\n");
	do{
		printf("Enter Choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter Value: ");
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
