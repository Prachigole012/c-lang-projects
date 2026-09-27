#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter the value");
	scanf("%d",&a);
	
	c=a%10;
	while(a>=9){
		b=a/10;
    	a=b+c;
	}
	printf("%d",a);
}