#include<stdio.h>

int sum(int a, int b){
  return a+b;
}

int sub(int a,int b){
  return a-b;
}

int mul(int a, int b){
  return a*b;
}

int div(int a,int b){
  return a/b;
}

int mod(int a, int b){
  return a%b;
}

int main(){

  int choice,a,b,ans;

  do{
    printf("\n Press 1 for +");
    printf("\n Press 2 for -");
    printf("\n Press 3 for *");
    printf("\n Press 4 for /");
    printf("\n Press 5 for %%");
    printf("\n Press 0 for exit");

    printf("\n Enter your choice:");
    scanf("%d",&choice);

    if(choice==0){
      printf("Program End");
      break;

    }

    switch(choice){
      case 1:
      printf("Enter first number:");
      scanf("%d",&a);
      printf("Enter second number:");
      scanf("%d",&b);

      ans=sum(a,b);
      printf("The Addition of %d and %d is:%d",a,b,ans);
      break;

      case 2:
      printf("Enter first number:");
      scanf("%d",&a);
      printf("Enter second number:");
      scanf("%d",&b);

      ans=sub(a,b);
      printf("The Subtraction of %d and %d is:%d",a,b,ans);
      break;

      case 3:
      printf("Enter first number:");
      scanf("%d",&a);
      printf("Enter second number:");
      scanf("%d",&b);

      ans=mul(a,b);
      printf("The Multiplication of %d and %d is:%d",a,b,ans);

      case 4:
      printf("Enter first number:");
      scanf("%d",&a);
      printf("Enter second number:");
      scanf("%d",&b);

      ans=div(a,b);
      printf("The Division of %d and %d is :%d",a,b,ans);

      case 5:
      printf("Enter first number:");
      scanf("%d",&a);
      printf("Enter second number:");
      scanf("%d",&b);

      ans=mod(a,b);
      printf("The Modulus of %d and %d is :%d",a,b,ans);

      default:
      printf("Invalid Program.");
    }

  }while(choice != 0);

  return 0;


 }