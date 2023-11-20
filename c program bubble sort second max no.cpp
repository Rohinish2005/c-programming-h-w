#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n],i,max=0,ind=0;
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=1;i<n;i++){
		if(max<a[i]){
			max=a[i]-1;
			ind=i;
	}
	}
	printf("The max elements is:%d",max);
	printf("The index of max element:%d",ind);
	return 0;
}
