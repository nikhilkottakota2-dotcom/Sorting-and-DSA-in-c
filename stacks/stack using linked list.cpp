#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *top = NULL;
void push(int x){
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = x;
	newnode->link = top;
	top = newnode;
	printf("%d pushed\n",top->data);
}

void pop(){
	struct node *temp;
	temp = top;
	if(top == NULL){
		printf("stack is empty\n");
	}
	else{
		printf("%d popped\n",top->data);
		top=top->link;
		free(temp);
		
	}
}
void display(){
	struct node *temp;
	if(top == NULL){
	printf("Stack is Empty\n");
	}
	else{
		printf("Stack elements are:\n");
		temp = top;
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp = temp->link;
		}
	}

}

int main(){
	int value,choice;
	printf("\n---STACK MENU---\n");
	printf("\n1)push\n2)pop\n3)display\n4)exit\n");
	do{
		printf("Enter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter value: ");
				scanf("%d",&value);
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exiting program");
				break;
			default:
				printf("Invalid choice");
		}
	}while(choice!=4);
}
