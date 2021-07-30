#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int a[100][100];
	int row ,coloum,choice,dsum,sum,max;
	int cntodd=0;
	while(1){
		printf("enter choice : ");
		printf("\n 1 . insertion ");
		printf("\n 2 . output ");
		printf("\n 3 . total sum ");
		printf("\n 4 . digonal sum ");
		printf("\n 5 . odd number  ");
		printf("\n 6. max element ");
		printf("\n 7 . exit \n");
		scanf("%d",&choice);
		switch(choice){
		case 1:
		printf("enter row or coloum : ");
		scanf("%d%d",&row,&coloum);
		sum=0;
		dsum=0;
		for(int i=0;i<row;i++){
			for(int j=0;j<coloum;j++){
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
			if(i==j)	dsum+=a[i][j];
			if(a[i][j]%2!=0) cntodd++;
			if(a[i][j]>max) max=a[i][j];
		}
		}
		break;
		case 2:
			for(int i=0;i<row;i++){
				for(int j=0;j<coloum;j++){
			printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		break;
		case 3:
			printf("%d\n",sum);
			break;
		case 4:
			printf("%d\n",dsum);
			break;
		case 5:
			printf("%d\n",cntodd);
			break;
		case 6:
			printf("%d\n",max);
			break;
		case 7:
			exit(0);
	}
		
				
	}
	
	
	
}
