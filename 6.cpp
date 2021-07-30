#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int swap(int *a,int i,int j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int input(int *a,int n){
	for(int i=0;i<n;i++)	scanf("%d",&a[i]);
	return n;
}
int output(int *a,int n){
	for(int i=0;i<n;i++)	printf("%d ",a[i]);
	return n;
}
int insert(int *a,int ele,int pos,int &size){
	if(pos>=size+1||pos<0)	printf("invalid position ");
	else{
		for(int i=size;i>=pos;i--){
			a[i]=a[i-1];
		}
		a[pos-1]=ele;
		size++;
	}
	return size;
}
int del(int *a,int pos,int &size){
	for(int i=pos-1;i<size;i++){
		a[i]=a[i+1];
	}
	size--;
	return size;
}
int main(){
	int a[MAX],choice,size=0;
	while(1){
		printf("Enter choice :");
		printf("\n 1. input : ");
		printf("\n 2. output : ");
		printf("\n 3. insertion : ");
		printf("\n 4. deletion : ");
		printf("\n 5. in assending : ");
		printf("\n 6. in desending : ");
		printf("\n 7. exit : ");
		scanf("%d",&choice);
		switch(choice){
		case 1:
//		input an array
		printf("enter size of an array : ");
		scanf("%d",&size);
		input(a,size);
		break;
		case 2:
//		output an array
		output(a,size);
		break;
		case 3:
//		insertion in an array at any position
		int element,position;
		printf("enter an element to be inserted : ");
		scanf("%d",&element);
		printf("enter an element to be inserted position : ");
		scanf("%d",&position);
		insert(a,element,position,size);
		break;
		case 4:
			printf("enter a element position which you want to delete : ");
			scanf("%d",&position);
			del(a,position,size);
			break;
		case 5:
			printf("elements are in asending order : ");
			for(int i=0;i<size;i++){
				for(int j=0;j<size-1-i;j++){
					if(a[j]>a[j+1])
					swap(a,j,j+1);
				}
			}
			break;
		case 6:
			printf("elements are in dsending order : ");
			for(int i=0;i<size;i++){
				for(int j=0;j<size-1-i;j++){
					if(a[j]<a[j+1])
						swap(a,j,j+1);
				}
			}
			break;
		case 7:
			exit(0); 
	}
	}
}
