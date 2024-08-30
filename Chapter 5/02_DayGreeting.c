/*
Write a program with three functions 
1. Good morning function which prints “good morning”. 
2. Good afternoon function which prints “good afternoon”. 
3. Good night function which prints “good night”.  
main() should call all of these in order 1→2→3
*/
#include <stdio.h>

void gm();
void ga();
void gn();

int main(){
    gm();
    ga();
    gn();

    return 0;
}

void gm(){
    printf("good morning\n");
}

void ga(){
    printf("good afternoon\n");
}

void gn(){
    printf("good night\n");
}
