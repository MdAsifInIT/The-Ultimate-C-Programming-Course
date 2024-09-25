// Create a structure representing a bank account of a customer. What fields did 
// you use and why?
#include <stdio.h>
#include <string.h>

typedef struct account{
    long long int ac_no; //Every account has account number which is a unique identifier!
    char name[20];
    float bal;
} account;

int main(){
    account a;
    account* ptr;
    ptr = &a;

    a.ac_no = 94988834454545;
    strcpy(a.name, "Mahesh Dhalla");
    a.bal = 420.66;

    printf("\nAccount Number = %lld\nName = %s\nBalance = %.2f\n", ptr -> ac_no, ptr -> name, ptr -> bal);
    


    return 0;
}