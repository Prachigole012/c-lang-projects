#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the row size:-");
	scanf("%d",&a);
	printf("Enter the colum size:-");
	scanf("%d",&b);
	
	int array[a][b];
	printf("Enter the element:-");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&array[i][j]);
		}
	}
	
	int c =array[0][0];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(array[i][j]>c){
				c=array[i][j];
			}
		}
	}
	printf("the largest element:-%d ",c);
	

}