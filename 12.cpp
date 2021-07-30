#include<stdio.h>
#include<stdlib.h>
//circular queue-->(circular linked list)-->add,delete,display 
//queue-->FIFO(first in first out)-->insertion-->rear  deletion-->front
struct node{
	int data;
	struct node *next;
};
void add(struct node **start,struct node **rear,int data){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	if(*rear==NULL){
		temp->next=temp;
		*start=temp;
		*rear=temp;	
	}
	else{
		temp->next=(*rear)->next;
		(*rear)->next=temp;
		*rear=temp;
	}
	
}

void del(struct node **start,struct node **rear){
	struct node *temp=*start;
	if(temp==NULL){
		printf("empty cqueue\n");
		return ;
	}
	(*rear)->next=(*rear)->next->next;
	(*start)=(*start)->next;
	free(temp);
}

void display(struct node **front){
	struct node *ptr;
	if(ptr==NULL){
		printf("\n list is empty ");
		return ;
	}
	ptr=*front;
	printf("\nelements are as follows:\n");
	do{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=*front);
	printf("\n");
}

int main(){
	struct node *front=NULL;
	struct node *rear=NULL;
	int choice,item;
	while(1){
		printf("\t select choice 1-4 :");
		printf("\n1.add \n2.delete \n3.display\n4.exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter element ");
				scanf("%d",&item);
				add(&front,&rear,item);
				break;
			case 2:
				del(&front,&rear);
				break;
			case 3:
				display(&front);
				break;
			case 4:
				exit(0);
		}
	}
	
	
	
}
