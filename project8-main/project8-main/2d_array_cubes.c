#include<stdio.h>

void cube(int arr[100][100],int r,int c){

    int *ptr;

    printf("\nCube of all elements:\n");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            ptr= &arr[i][j];
            printf("%d\t",(*ptr)*(*ptr)*(*ptr));
        }
        printf("\n");
    }

}

void main(){

    int arr[100][100];
    int r,c;

    printf("Enter the rows:");
    scanf("%d",&r);

    printf("Enter the columns:");
    scanf("%d",&c);

    printf("Enter array element:\n");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }

    }
    cube(arr, r, c);
}