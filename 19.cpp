#include<stdio.h>
int swap(int *a,int i,int j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

int partation(int *a,int start,int end){
	int pivot=a[end];
	int pindex=start;
	for(int i=start;i<end-1;i++){
		if(a[i]<=pivot){
			swap(a,pindex,i);
			pindex++;
		}
	}
	swap(a,pindex,end);
	return pindex;
}


int quicksort(int *a,int start,int end){
	if(start<end){
		int pindex=partation(a,start,end);
		quicksort(a,start,pindex-1);
		quicksort(a,pindex+1,end);	
	}
}
int main(){
	int a[]={10,89,88,76,2,1,3,4,57};
	int n=sizeof(a)/sizeof(a[0]);
	quicksort(a,0,n);
	for(int i=0;i<n;i++)	printf("%d ",a[i]);
}
