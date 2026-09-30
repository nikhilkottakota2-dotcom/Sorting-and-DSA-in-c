#include<stdio.h>
#define n 5
int queue[5];
int front = -1;
int rear = -1;
void enqueue(int x){
	if(rear==n-1){
		printf("overflowed\n");
	}
	else if(rear==-1&&front==-1){
		front=rear=0;
		queue[rear] = x;
		printf("%d enqueued\n",x);
	}
	else{
		rear++;
		queue[rear] = x;
		printf("%d enqueued\n",x);
	}
}

void dequeue(){
	if(rear == -1 && front == -1){
		printf("Underflowed\n");
	}
	else if(front == rear){
		printf("%d dequeued\n",queue[front]);
		front = rear = -1;
	}
	else{
		printf("%d dequeued\n",queue[front]);
		front++;
	}
}

void display(){
	if(rear == -1){
		printf("Queue is empty\n");
	}
	else{
		printf("\n---QUEUE ELEMENTS---\n");
		for(int i = front; i< rear+1;i++){
			printf("%d \t",queue[i]);
		}
	}
}

void peek(){
	if(rear == -1){
		printf("Queue is empty\n");
	}
	else{
		printf("%d\n",queue[front]);
	}
}
int main(){
	int value,choice;
	printf("\n---Queue Menu---\n");
	printf("\n1)Enqueue\n2)Dequeue\n3)Display\n4)peek\n5)exit\n");
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
				peek();
				break;
			case 5:
				printf("Program terminated\n");
				break;
			default:
				printf("Invalid choice\n");
		}
	}while(choice!=5);
}
