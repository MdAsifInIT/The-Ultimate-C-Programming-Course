#include <stdio.h>

int main(){
    // Write a program to check whether a number is divisible by 97 or not. 
    
    int a,c;
    
    printf("Enter a Number\n");
    scanf("%d", &a);
    c = a % 97;

    if (c==0){
    printf("%d is divisible by 97\n",a);
    }

    else{
    printf("%d is not divisible by 97\n",a);
    }

    return 0;
}