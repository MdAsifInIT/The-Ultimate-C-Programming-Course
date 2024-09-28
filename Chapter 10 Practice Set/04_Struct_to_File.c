// Take name and salary of two employees as input from the user and write them to 
// a text file in the following format: 
// i. Name1, 3300 
// ii. Name2, 7700

#include <stdio.h>
#include <string.h>

typedef struct employee {
    char name[10];
    int salary;
} ep;

int main(){
    ep e1 , e2;
    printf("Enter the name of the 1st employee.\n");
    fgets(e1.name, sizeof(e1.name), stdin);
    e1.name[strcspn(e1.name, "\n")] = '\0'; // Removing newline from the string!
    printf("Enter the salary of the 1st employee.\n");
    scanf("%d", &e1.salary);

    getchar(); //Clear the newline

    printf("Enter the name of the 2nd employee.\n");
    fgets(e2.name, sizeof(e2.name), stdin);
    e2.name[strcspn(e2.name, "\n")] = '\0'; // Removing newline from the string!
    printf("Enter the salary of the 2nd employee.\n");
    scanf("%d", &e2.salary);

    FILE* ptr = fopen("04_test.txt", "w");
    fprintf(ptr, "i. %s, %d\nii. %s, %d\n", e1.name, e1.salary, e2.name, e2.salary);
    fclose(ptr);

    return 0;
}