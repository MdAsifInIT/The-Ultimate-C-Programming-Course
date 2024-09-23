//‘typedef’ is more commonly used with structures.
#include <stdio.h>
#include <string.h>

typedef struct employee{
    char name[10];
    int sapid;
    float salary;
} emp;

int main(){
    emp e1;
    strcpy(e1.name, "Md Asif");
    e1.sapid = 69696959;
    e1.salary = 2.8;

    printf("%s, %d, %.2f\n", e1.name, e1.sapid, e1.salary);

    emp e2;
    emp* ptr = &e2;
    strcpy(e2.name, "Md Asif");
    e2.sapid = 69696959;
    e2.salary = 2.8;

    printf("%s, %d, %.2f\n", ptr -> name, ptr -> sapid, ptr -> salary);

    return 0;
}