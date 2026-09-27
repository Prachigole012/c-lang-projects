#include<stdio.h>
void main(){
	int n;
	printf("Enter the array size:-");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the element:-");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Negative elements:-");
	for(int i=0;i<n;i++){
		if(a[i]<0){
			printf("%d",a[i]);
		}
	}
}