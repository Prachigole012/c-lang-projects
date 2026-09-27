#include<stdio.h>
void main(){
	int c=11;
	for(int i=11;i<=14;i++){
		for(int j=i;j>=11;j--){
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
}