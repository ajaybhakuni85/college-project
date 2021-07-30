#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insertionAtFirst(struct node **last,int data){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	if(*last==NULL){
		temp->next=temp;
		*last=temp;
	}
	else{
	temp->next=(*last)->next;
	(*last)->next=temp;
}
}
void deleteAtEnd(struct node **last){
	if(*last==NULL)	printf("circular linked list is empty : ");
	else{
		struct node *pre=(*last)->next;
		do{
			pre=pre->next;
		}while(pre!=(*last)->next);
		struct node *temp=*last;
		pre->next=(*last)->next;
		*last=pre;
		free(temp);
	}
	
}
void insertionBetweentwonodes(struct node **last,int pos,int data){
	struct node *temp=(*last)->next;
	int i=1;
	for(i=1;i<pos-1;i++){
		temp=temp->next;
	}
	struct node *n=(struct node*)malloc(sizeof(struct node));
	n->next=temp->next;
	temp->next=n;
}
void delfromfirst(struct node **last){
	struct node *temp=(*last)->next;
	(*last)->next=(*last)->next->next;
	free(temp);
}
void delfrompos(struct node **last,int pos){
	struct node *temp=(*last)->next;
	int i;
	for(i=1;i<pos;i++){
		temp=temp->next;
	}
	struct node *f;
	f=temp->next;
	temp->next=temp->next->next;
	free(f);
}
void display(struct node **last){
	struct node *ptr;
	if(*last==NULL){
		printf("\n list is empty ");
		return ;
	}
	ptr=(*last)->next;
	printf("\nelements are as follows:\n");
	do{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=*last);
}


int main(){
	struct node *last=NULL;
	int choice, item,pos; 
while(1){
printf(" \n1. Add an element At begin");
printf(" \n2. Delete an element from end");
printf(" \n3. insertion between two nodes\n4.deletion first node :\n5.delete from pos:\n6.display");
printf(" \n7. Want to Quit!\n");
printf(" \nChoose Option: ");
scanf("%d", &choice);
 
switch(choice){
case 1:
printf("\nEnter an item to insert at begin : ");
scanf("%d",&item);
insertionAtFirst(&last,item); 
break;

case 2:
deleteAtEnd(&last);
break;

case 3:
printf("enter pos :");
scanf("%d",&pos);
printf("\nEnter an item : ");
scanf("%d",&item);
insertionBetweentwonodes(&last,pos,item);
break;

case 4:
delfromfirst(&last);
break;


case 5:
printf("enter pos :");
scanf("%d",&pos);
delfrompos(&last,pos);
break;

case 6:
display(&last);
break;

case 7:
exit(0);
}
}

	
}
