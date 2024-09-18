// Quick Quiz: Write a program to store the details of 3 employees from user defined data. 
// Use the structure declared above.
#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1, e2;

    printf("Enter the details of first employee:\n");
    printf("1. Employee Code\n2. Salary\n3. Name \n");
    scanf("%d", &e1.code);
    scanf("%f", &e1.salary);
    getchar();
    fgets(e1.name, sizeof(e1.name), stdin);

    printf("\n \n");

    printf("Enter the details of second employee:\n");
    printf("1. Employee Code\n2 .Salary\n3. Name \n");
    scanf("%d", &e2.code);
    scanf("%f", &e2.salary);
    getchar();
    fgets(e2.name, sizeof(e2.name), stdin);

    printf("%d %.2f %s\n\n", e1.code, e1.salary, e1.name);
    printf("%d %.2f %s\n\n", e2.code, e2.salary, e2.name);

    return 0;
}