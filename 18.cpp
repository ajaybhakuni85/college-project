#include<stdio.h>
int merge(int *a,int l,int mid,int r){
	int b[r+1];
	mid=(l+r)/2;
	int i=l,j=mid+1,k=l;
	while(i<=mid&&j<=r){
		if(a[i]>a[j]){
			b[k]=a[j];
			k++;
			j++;
		}
		else if(a[i]<a[j]){
			b[k]=a[i];
			k++;
			i++;
		}
	}
	for(;i<=mid;i++)	b[k++]=a[i];
	for(;j<=r;j++)	b[k++]=a[j];
	
	for(int m=l;m<=r;m++)	a[m]=b[m];
}

int mergesort(int *a,int l,int r){
	if(l<r){
		int mid=(l+r)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,mid,r);//merge 2 list in single array 
	}
}


int main(){
	
int a[]={10,9,8,7,6,5,43,3,22};//3,5,6,7,8,9,10,22,43
int n=sizeof(a)/sizeof(a[0]);
mergesort(a,0,n);
for(int i=1;i<=n;i++)	printf("%d\n",a[i]);	
	
}
