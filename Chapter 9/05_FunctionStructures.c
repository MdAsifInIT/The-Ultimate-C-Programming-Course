// write a show function to display the content of employee.
#include <stdio.h>
#include <string.h>

struct employee {
    char name[10];
    int SAP_ID;
    float Salary_pa;
};

void show(struct employee e);

void show(struct employee e){
    printf("Name = %s\n", e.name);
    printf("SAP_ID = %d\n", e.SAP_ID);
    printf("Salary_pa = %.2f\n", e.Salary_pa);
}

int main(){
    struct employee e1,e2;
    strcpy(e1.name, "Md Asif");
    e1.SAP_ID = 69696959;
    e1.Salary_pa = 6.9;

    show(e1);
    return 0;
}