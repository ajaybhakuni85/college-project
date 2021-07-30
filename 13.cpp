#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

void insertionAtBegin(struct node **start,int data){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=*start;
	*start=temp;
}

void insertionAtLast(struct node **start,int data){
	struct node *last=*start;
	while(last->next!=NULL){
		last=last->next;
	}
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	last->next=temp;
}

void insertionBetweenPos(struct node **start,int data,int pos){
	struct node *q=*start;
	int i;
	for(i=1;i<pos;i++){
		q=q->next;
	}
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=q->next;
	q->next=temp;
}

void display(struct node **start){
	struct node *temp=*start;
	while(temp!=NULL){
	printf("%d ",temp->data);
	temp=temp->next;
}
}

void deletionAtBegin(struct node **start){
	struct node *temp=*start;
	(*start)=(*start)->next;
	free(temp);
}

void deletionAtEnd(struct node **start){
	struct node *last=*start;
	while(last->next!=NULL){
		last=last->next;
	}
	struct node *temp=last->next;
	last->next=NULL;
	free(temp);
	
}

void deletionAtPos(struct node **start,int pos){
	int i;
	struct node *q=*start;
	for(i=1;i<pos-1;i++){
		q=q->next;
	}
	struct node *temp=q->next;
	q=q->next->next;
	free(temp);
	
}

int main(){
	struct node *start=NULL;
	int choice,item,pos; 
while(1){
printf(" \n1. insertion at begin");
printf(" \n2. insertion at end ");
printf(" \n3. insertion between two node :\n4. display\n5. delete first node \n6. deletion of last node \n7. deletion at give poisition :");
printf(" \n8. Want to Quit!\n");
printf(" \nChoose Option: ");
scanf("%d", &choice);
 
switch(choice){
case 1:
printf("\nEnter an item to insert at begin : ");
scanf("%d",&item);
insertionAtBegin(&start,item); 
break;

case 2:
printf("\nEnter an item to insert at end : ");
scanf("%d",&item);
insertionAtLast(&start,item); 
break;

case 3:
printf("\nEnter an item to insert between two node : ");
scanf("%d",&item);
printf("\nEnter an pos : ");
scanf("%d",&pos);
insertionBetweenPos(&start,item,pos); 
break;

case 4:
	display(&start);
	break;

case 5:
	deletionAtBegin(&start);
	break;
	
case 6:
	deletionAtEnd(&start);
	break;
case 7:
	printf("\nenter postion :");
	scanf("%d",&pos);
	deletionAtPos(&start,pos);
	break;
case 8:
exit(0);
}
	
}
}
