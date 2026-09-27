#include<stdio.h>
#include<string.h>

void main(){
    int length,flag=0;

    char str[100];
    printf("please enter your string");
    scanf("%s", str);

    length=strlen(str);

    for(int i=0; i<length/2; i++){
        if(str[i]!= str[length-i-1]){
            flag=1;
            break;

        }
    }

    if(flag){
        printf("%s is not a palindrome",str);

    }else{
        printf("%s is a palindrome",str);
    }
    
}