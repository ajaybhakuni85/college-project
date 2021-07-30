#include<stdio.h>
#include<malloc.h>
//storing collection of element's (like array) using dynamic memory allocation
int main(){
	int n;
	printf("Enter numbers : ");
	//getting the number of element's
	scanf("%d",&n);
	int *ptr;
	//allocation memory for given element's
	ptr=(int *)malloc(n*sizeof(int));
	//getting n number's 
	for(int i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	//output n number's
	for(int i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
}
