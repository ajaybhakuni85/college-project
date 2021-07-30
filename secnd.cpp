#include<stdio.h>
#include<malloc.h>
//employ detail's using structure and using dyanamic memory allocation
//structure for employ detail's 
struct emp{
	char name[30];
	int age;
	double salary;
};
int main(){
	int n;
	printf("Enter total employes : ");
	//getting number of total emoloye
	scanf("%d",&n);
	struct emp *ptr;
	//alocating memory
	ptr=(struct emp *)calloc(n,sizeof(struct emp));
	//getting detail's
	for(int i=0;i<n;i++){
		printf("\n enter %d employe name : ",i+1);
		scanf("%s",&(ptr+i)->name);
		printf("\n enter %d first employe age : ",i+1);
		scanf("%d",&(ptr+i)->age);
		printf("\n enter %d employe salary : ",i+1);
		scanf("%lf",&(ptr+i)->salary);
	}
	//outputing detail's
	for(int i=0;i<n;i++){
		printf("%d employ  name : %s\t age : %d \t salary:%lf \t \n",i+1,(ptr+i)->name,(ptr+i)->age,(ptr+i)->salary);
	}
}
