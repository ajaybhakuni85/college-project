#include<stdio.h>
#include<process.h>
#define MAX 5
int main(){
	int cq[MAX];
	int front=-1;
	int rear=-1;
	int choice,element;
		while(1){
 	printf("\n queue Menu \n");
	printf("\n1.insert \n2.delete \n3.Display \n4.Exit");
 	printf("\nEnter your choice(1-4):");
 	scanf("%d",&choice);
switch(choice){
	case 1:
		printf("enter element:");
		scanf("%d",&element);
		if(rear==MAX-1&&front==-1 ||front==rear+1)	printf("queue overflow : ");
		else{
		if(front==-1){
			front=0;
			rear=0;
		}
		else if(front!=0&&rear==MAX-1)	rear=0;
		else{
		rear++;
		}
		cq[rear]=element;
		}
		break;
		
		case 2:
			if(front==-1)	printf("queue is empty !");
			else if(front==MAX-1 && front!=rear)	front=0;
			else front++;
			break;
			
		case 3:
			int i;
			if(front==-1)	printf("cqueue is full !\n");
			else if(front<=rear){
				for(i=front;i<=rear;i++)	printf("%d\t",cq[i]);
			}
			else {
				for(i=front;i<=MAX-1;i++){
					printf("%d\t",cq[i]);
				}
				for(i=0;i<=rear;i++){
					printf("%d\t",cq[i]);
				}
	}
	break;
case 4:
	exit(0);

}
	

}
}
