#include <stdio.h>
#define n 5
int stack[n];
int top = -1;
void push(){
	int x;
	printf("Enter data: ");
	scanf("%d",&x);
	if(top == n-1){
		printf("stack is full\n");
	}
	else{
		top++;
		stack[top] = x;
		printf("%d inserted\n",x);
	}
}

void pop(){
	int temp;
	if(top == -1){
		printf("Stack is empty\n");
	}
	else{
		temp = stack[top];
		top--;
		printf("%d popped\n",temp);
	}
}

void peek(){
	if(top == -1){
		printf("Stack is empty\n");
	}	
	else{
		printf("%d",stack[top]);
	}
}

void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("%d\n",stack[i]);
	}
}

int main(){
	int s;

	do{
		printf("\n---STACK MENU---\n");
		printf("\n1)push\n2)pop\n3)peek\n4)display\n5)exit\n");
		printf("Enter choice: ");
		scanf("%d",&s);
		switch(s){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				printf("Exiting program\n");
				break;
			default:
				printf("Invalid choice\n");
		}
	}while(s!=5);
}
