#include<stdio.h>
void main(){
	int a,b;
	printf("Enter th row size:");
	scanf("%d",&a);
	printf("Enter the colum size:");
	scanf("%d",&b);
	
	int array[a][b];
	printf("Enter the element:\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("Transpose matrix:\n");
	for(int j=0;j<b;j++){
		for(int i=0;i<a;i++){
			printf("%d",array[i][j]);
		}
	printf("\n");
	}
	
}