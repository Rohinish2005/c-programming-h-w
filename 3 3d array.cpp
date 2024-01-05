#include<stdio.h>
int main(){
	int n,m;
	printf("Enter the limits");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n],c[m][n],i,j;
	printf("A Matrix Elements");
	for(i=0;i<m;i++){
		scanf("%d",&a[i][j]);
	}
	printf("B Matrix Elements");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The result matrix is...\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		printf("%d\t",c[i][j]);
		printf("\n");
	}
	return 0;
}
