#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *head,*temp,*newnode;
	int choice = 1;
	head = NULL;
	while(choice){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	if(head == NULL){
		head = temp = newnode;
	}
	else{
		temp->next = newnode;
		temp = newnode;
	}
	printf("Do you want to add data (0/1): ");
	scanf("%d",&choice);
}
	temp = head;
	while(temp!=NULL){
		printf("%d-->",temp->data);
		temp = temp->next;
	}
	printf("NULL");
}
