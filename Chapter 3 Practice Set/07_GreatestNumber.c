// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main(){
    int a,b,c,d, greatest;

    printf("Enter the four numbers\n");
    scanf("%d %d %d %d", &a,&b,&c,&d);

    greatest = a;
    b>greatest? greatest = b: b != greatest;
    c>greatest? greatest = c: c != greatest;
    d>greatest? greatest = d: d != greatest;

    printf("The greatest number is %d", greatest);

    return 0;
}