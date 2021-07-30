//stack using linked list
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct node{
	int data;
	struct node *next;
};
void push(struct node **tos,int ele){
	if(tos==NULL){
				struct node *ptr=(struct node*)malloc(sizeof(struct node));
				ptr->data=ele;
				ptr->next=NULL;
				*tos=ptr;
	}
	else{
			struct node *ptr=(struct node*)malloc(sizeof(struct node));
			ptr->data=ele;
			ptr->next=*tos;
			*tos=ptr;	
			}
}
int main(){
	int choice,ele;
	struct node *tos=NULL;
	while(1){
		printf("stack menu :\n");
		printf("\n 1.push \n 2.pop \n 3.display \n 4.exit\n");
		printf("Enter choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter element : ");
				scanf("%d",&ele);
				push(&tos,ele);
				
			
				break;
			
			case 2:
				struct node *temp;
				if(tos==NULL){
					printf("stack is empty :");
				}
				else{
					temp=tos;
					tos=tos->next;
					free(temp);
				}
				break;
				
			case 3:
				struct node *p;
				if(tos==NULL)	printf("stack is empty :");
				else{
					p=tos;
				while(p!=NULL){
					printf("%d\t",p->data);
					p=p->next;
				}
				printf("\n");
			}
			break;
				
			case 4:
				exit(0);		
		}
	}
	
	
	
}
