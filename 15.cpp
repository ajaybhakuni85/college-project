//double linked list-->ptr-->data-->data
//insert at begin
//deletion at end
//insetion between two nodes
//deletion at first
//deletion at pos
//deletion any node
#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *pre;
	int data;
	struct node *next;
};
void insertAtEnd(struct node **head,int data){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	if(*head==NULL){
		temp->pre=NULL;
		temp->next=NULL;
		*head=temp;
	}
	else{
		struct node *ptr=*head;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		temp->pre=ptr;
		(ptr)->next=temp;
		temp->next=NULL;
	}
}


void display(struct node **head){
	struct node *ptr=*head;
	if(ptr==NULL){
		printf("list is empty\n");
		return ;
	}
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

void insertAtBegin(struct node **head,int data){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	if(*head==NULL){
		temp->pre=NULL;
		temp->next=NULL;
		*head=temp;
	}
	else{
		temp->next=*head;
		temp->pre=NULL;
		(*head)->pre=temp;
		*head=temp;
	}
}

void deleteAtFirst(struct node **head){
	struct node *ptr=*head;
	if(ptr==NULL){
		printf("\nlist is empty \n");
		return ;
	}
	*head=(*head)->next;
	(*head)->pre=NULL;
	free(ptr);
}

void deleteAtEnd(struct node **head){
	struct node *ptr=*head;
	while(ptr->next->next!=NULL){
		ptr=ptr->next;
	}
	struct node *temp=ptr->next;
	free(temp);	
	ptr->next=NULL;
	
	
}

void deleteAtPos(struct node **head,int pos){
	int i;
	struct node *ptr=*head;
	for(i=0;i<pos;i++){
		ptr=ptr->next;
	}
	ptr->pre->next=ptr->next;
	ptr->next->pre=ptr->pre;
	free(ptr);
}

void insertAtPos(struct node **head,int item,int pos){
struct node *temp=*head;
int i;
for(i=1;i<pos;i++){
	temp=temp->next;
}	
struct node *n=(struct node*)malloc(sizeof(struct node));
n->data=item;
n->next=temp->next;
temp->next=n;
	
}


void deletedesireele(struct node **head,int item){
	struct node *ptr=*head;
	struct node *temp=*head;
	int flag=0;
	int i=0;
	while(temp!=NULL){
		if(temp->data==item){
			flag=1;
			break;
		}
		temp=temp->next;
		i++;
	}
	if(flag){
		for(int j=0;j<i;j++){
				ptr=ptr->next;
		}
	ptr->pre->next=ptr->next;
	ptr->next->pre=ptr->pre;
	free(ptr);
	}
	else{
		printf("invalid input : ");
	}
	}
	



int main(){
	struct node *head=NULL;
	int choice,item,pos;
	while(1){
		printf("enter choice 1-9 ");
		printf("\n 1.insertion at begin : \n 2.insertion at end \n3.deletion at first\n4.deletion at end\n5.deletion at any pos \n6.insertion at any pos\n7.deletion at any place \n8.display\n9.exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter an element");
				scanf("%d",&item);
				insertAtBegin(&head,item);
				break;
			case 2:
				printf("enter an element");
				scanf("%d",&item);
				insertAtEnd(&head,item);
				break;
			case 3:
				deleteAtFirst(&head);
				break;
			case 4:
				deleteAtEnd(&head);
				break;
			case 5:
				printf("enter pos : ");
				scanf("%d",&pos);
				deleteAtPos(&head,pos);
				break;
			case 6:
				printf("enter element:");
				scanf("%d",&item);
				printf("enter pos : ");
				scanf("%d",&pos);
				insertAtPos(&head,item,pos);
				break;
			
			case 7:
				printf("enter element:");
				scanf("%d",&item);
				deletedesireele(&head,item);
				break;
			case 8:
				display(&head);
				break;
			case 9:
				exit(0);
		}
	}
	
	
}
