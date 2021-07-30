#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;
void createLinkedList(int data){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		struct node *last=start;
		while(last->next!=NULL){
			last=last->next;
		}
		last->next=temp;
	}
}
void display(){
	struct node *temp=start;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void odd(){
	struct node *odd=start;
	int i=1;
	while(odd!=NULL){
		if(i%2!=0)	printf("%d ",odd->data);
		i++;
		odd=odd->next;
	}
	printf("\n");
}

void even(){
	struct node *odd=start;
	int i=1;
	while(odd!=NULL){
		if(i%2==0)		printf("%d ",odd->data);
		i++;
		odd=odd->next;
	}
	printf("\n");
}
int main(){
	int n,element;
	printf("enter size of linked list :");
	scanf("%d",&n);
	printf("enter elements :");
	while(n--){
		scanf("%d",&element);
		createLinkedList(element);
	}
	printf("P is : \n");
	display();
	printf("Q is : \n");
	odd();
	printf("R is : \n");
	even();
}
