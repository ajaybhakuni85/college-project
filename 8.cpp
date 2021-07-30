#include<stdio.h>
#include<process.h>
#define MAX 5
//int insert(int *q,int element,int rear,int *front){
//	if(rear==MAX-1)	printf("queue overflow : ");
//	else{
//		if(*(front)==-1){
//			front=0;
//		}
//		else{
//		rear++;
//		}
//		q[rear]=element;
//	}
//	return rear;
//}
//int del(int *q,int front){
//	if(front==-1)	printf("stack is empty ");
//	else{
//		front++;
//	}
//	return front;
//}
//void display(int *q,int front,int rear){
//	for(int i=front;i<=rear;i++){
//		printf("%d ",q[i]);
//	}
//	
//}


int main(){
	int queue[MAX];
	int rear=-1;
	int front=-1;
	int choice;
	int element;
	while(1){
 	printf("\n queue Menu \n");
	printf("\n1.insert \n2.delete \n3.Display \n4.Exit");
 	printf("\nEnter your choice(1-4):");
 	scanf("%d",&choice);
switch(choice){
	case 1:
		printf("enter element:");
		scanf("%d",&element);
		if(rear==MAX-1)	printf("queue overflow : ");
		else{
		if(front==-1){
			front=0;
			rear=0;
		}
		else{
		rear++;
		}
		queue[rear]=element;
		}
		break;
		
	case 2:
	if(front==-1)	printf("stack is empty ");
	else{
		front++;
	}
	break;
	
	case 3:
	for(int i=front;i<=rear;i++){
		printf("%d ",queue[i]);
	}
		break;
	case 4:
		exit(0);
}
}
}
