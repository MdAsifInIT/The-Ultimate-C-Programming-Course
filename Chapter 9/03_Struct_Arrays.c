#include <stdio.h>
#include <string.h>

struct employee {
    char name[10];
    int SAP_ID;
    float Salary_pa;
};

int main(){
    struct employee hcltech[100]; // an array of structures 
    // we can access the data using:
    
    strcpy(hcltech[0].name, "Md Asif");
    hcltech[0].SAP_ID = 69696959;
    hcltech[0].Salary_pa = 3.6;

    strcpy(hcltech[0].name, "Brajesh Kumar");
    hcltech[1].SAP_ID = 69696957;
    hcltech[1].Salary_pa = 3.6;
    

    //Other ways to initialize a structure:
    struct employee ritish = {"Ritish", 69696958, 6.9};
    printf("%s %d %f\n", ritish.name, ritish.SAP_ID, ritish.Salary_pa);

    struct employee prateek = {0};
     printf("%s %d %f\n", prateek.name, prateek.SAP_ID, prateek.Salary_pa);
    return 0;
}