#include<stdio.h>
int main(){
	int arr[30],ele,i,num,f=0;
	printf("Enter the size of array");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("Enter the element arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search");
	scanf("%d",&ele);
	f=0;
	for(i=0;i<num;i++){
		if(arr[i]==ele){
		printf("Element is found ");
		f=1;
		break;}
	}
	if(!f)
		printf("Element is not found");
return 0;
	}
	
