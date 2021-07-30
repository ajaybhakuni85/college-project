#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 5
int push(int*s, int top, int item)
{
if(top == MAX-1)	printf("\nStack is full! Overflow condition");
else{
top++;
s[top]=item;
}
return top;
}

int pop(int *s, int top)
{
 if(top == -1)	printf("stack is empty stack underflow");
 else	top--;
 return top; 
}


void display(int *s, int top){
int i;
if(top == -1)	printf("\nStack is empty!");
else{
printf("\nStack is as follows:\n");
for(i=top; i>=0; --i){ 
printf("%d\n", s[i]);
}
}
}


int main()
{
int stack[MAX], top= -1, choice, item;
while(1)
{
 	printf("\n Stack Menu \n");
	printf("\n1.Push \n2.Pop \n3.Display \n4.Exit");
 	printf("\nEnter your choice(1-4):");
 	scanf("%d",&choice);
switch(choice)
 {
case 1:
	printf("Enter an element to be pushed into stack ");
	scanf("%d",&item);
	top=push(stack,top,item);
	break;

case 2: 
	top=pop(stack,top);
 	break;
 	
case 3: 
display(stack,top);
break;

case 4:
exit(0);
}
}
}

