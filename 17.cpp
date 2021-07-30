#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insertionAtLast(struct node **start,int data){
	struct node *last=*start;
	if(last==NULL){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	*start=temp;
	}
	else{
	while(last->next!=NULL){
		last=last->next;
	}
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	last->next=temp;
}
}

void split(struct node *head,struct node **front,struct node **back){
	struct node *fast;
	struct node *slow;
	slow=head;
	fast=head->next;
	while(fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			slow=slow->next;
			fast=fast->next;
		}
	}
	*front=head;
	*back=slow->next;
	slow->next=NULL;
}



struct node *sortedMerge(struct node *a,struct node *b){
	struct node *result=NULL;
	if(a==NULL){
		return b;
	}
	else if(b==NULL){
		return a;
	}
	if(a->data <= b->data){
		result=a;
		result->next=sortedMerge(a->next,b);
	}
	else{
		result=b;
		result->next=sortedMerge(a,b->next);
	}
	return result;
}
void mergeSort(struct node **headref){
	struct node *head=*headref;
	struct node *a;
	struct node *b;
	if(head==NULL || head->next==NULL)	return ;
	
	split(head,&a,&b);
	mergeSort(&a);
	mergeSort(&b);
	*headref=sortedMerge(a,b);
}

void display(struct node **start){
	struct node *temp=*start;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(){
	int ele,n;
	struct node *a=NULL;
	printf("enter size of list");
	scanf("%d",&n);
	printf("enter elements");
	while(n--){
	scanf("%d",&ele);
	insertionAtLast(&a,ele);
	}
	printf("unsorted list");
	display(&a);
	mergeSort(&a);
	printf("sorted list");
	display(&a);
	
}
