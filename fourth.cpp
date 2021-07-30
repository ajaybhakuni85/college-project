#include<stdio.h>
int main(){
	int a[3][3];
	int a1[3][3];
	int c[3][3];
	printf("enter element of first matrix : \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter element of second matrix : \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a1[i][j]);
		}
	}
	printf("\n \t After multiplication : \n");
//multiplication process in 3*3 matrix 
	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				c[i][j]=0;
				for(int k=0;k<3;k++){
					c[i][j]+=a[i][k]*a1[k][j];
				}
			}
		}
//printing 3*3 matrix after multiplication
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
