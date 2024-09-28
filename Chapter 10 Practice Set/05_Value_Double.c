// Write a program to modify a file containing an integer to double its value.

#include <stdio.h>

int main(){
    FILE* ptr = fopen("05_test.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    fclose(ptr);

    FILE* ptr2 = fopen("05_test.txt", "w");
    fprintf(ptr2, "%d", (num*2));
    fclose(ptr2);

    return 0;
}