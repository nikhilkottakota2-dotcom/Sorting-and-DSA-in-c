#include<stdio.h>
#define n 5
int queue[n];
int front = -1;
int rear = -1;
void enqueue(int x){
	if(front==-1&&rear==-1){
		front=rear=0;
		queue[rear]=x;
		printf("%d Enqueued\n",queue[rear]);
	}
	else if(((rear+1)%n)==front){
		printf("Queue is Full\n");
	}
	else{
		rear = rear+1;
		queue[rear]=x;
		printf("%d Enqueued\n",queue[rear]);
	}
}

void dequeue(){
	if(front==-1&&rear==-1){
		printf("Queue is Empty\n");
	}
	else if(front == rear){
		printf("%d dequeued\n",queue[front]);
		front=rear=-1;
	}
	else{
		printf("%d dequeued\n",queue[front]);
		front = (front+1)%n;
	}
}

void display(){
	int i = front;
	if(front==-1&&rear==-1){
		printf("Queue is empty\n");
	}
	else{
		printf("Queue is: ");
		while(i!=rear){
			printf("%d\t",queue[i]);
			i = (i+1)%n;
		}
		printf("%d\n",queue[rear]);
	}
}

int main(){
	int choice,value;
	printf("---Queue Menu---\n");
	printf("1)Enqueue\n2)Dequeue\n3)display\n4)Exit\n");
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
				printf("Program terminated\n");
				break;
			default:
				printf("Invalid program\n");
				
		}
	}while(choice!=4);
}
