#include<stdio.h> 
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};


void display(struct node *front){
struct node *ptr=front;
if(front!=NULL){
printf("\nElements are as: ");
while(ptr!=NULL){
printf("\t%d", ptr->data);
ptr=ptr->next;
}
} 
else if (*front == NULL)
printf("\nQueue is Empty");
}

void addqueue(struct node **front,struct node **rear,int element){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=element;
	temp->next=NULL;
	if(*front == NULL){
		*front=temp;
		*rear=*front;
	}
	else{
		(*rear)->next=temp;
		*rear=temp;
	}
}

void deQueue(struct node **front){
	struct node *temp=*front;
	if(*front==NULL)	printf("queue is empty :\n");
	else{
		*front=(*front)->next;
		free(temp);
	}
}


int main(){
struct node *rear=NULL;
struct node *front=NULL;
int choice, item; 
while(1){
printf(" \n1. Add an element in Queue");
printf(" \n2. Delete an element from Queue");
printf(" \n3. Display elements of Queue");
printf(" \n4. Want to Quit!\n");
printf(" \nChoose Option: ");
scanf("%d", &choice);
 
switch(choice){
case 1:
printf("\nEnter an item to push into Queue: ");
scanf("%d",&item);
addqueue(&front,&rear,item); 
break;

case 2:
deQueue(&front);
break;

case 3:
display(&front);
break;

case 4:
exit(0);
}
}
}
