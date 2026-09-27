#include<stdio.h>
void main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<i;j++){
			printf(" ");
		}
		for(int k=5;k>=i;k--){
			if(k%2!=0){
				printf("1");
			}else{
				printf("0");
			}
		}
		printf("\n");
	}
}