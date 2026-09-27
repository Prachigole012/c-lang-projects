#include<stdio.h>
void main(){
	int a,b;
	printf("enter the row size:-");
	scanf("%d",&a);
	printf("enter the colum size:-");
	scanf("%d",&b);
	
	int array[a][b];
	printf("Enter the element:\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&array[i][j]);
		}
	}
	
	int row,col,sum;
	
	
	printf("Enter row element:\n");
	scanf("%d", &row);
	
	sum=0;
	printf("Row element:");
	for(int j=0;j<b;j++){
		printf("%d",array[row][j]);
		sum += array[row][j];
	}
	printf("\nSum of row = %d\n",sum);
	
	printf("Enter column number: ");
    scanf("%d", &col);

    sum = 0;
    printf("Column elements: ");
    for(int i=0;i<a;i++){
        printf("%d",array[i][col]);
        sum += array[i][col];
    }
    printf("\nSum of column = %d", sum);

}