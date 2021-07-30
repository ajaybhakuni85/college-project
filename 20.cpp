#include<stdio.h>
int binarySearch(int *a,int n,int key){
	for(int i=0;i<n;i++){
		if(a[i]==key){
			return i+1;
		}	
	}
	return -1;
}
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int key;
	int n=sizeof(a)/sizeof(a[0]);
	scanf("%d",&key);
	if(binarySearch(a,n,key)!=-1)	printf("element found at : %d",binarySearch(a,n,key));
	else printf("element not found");
}
