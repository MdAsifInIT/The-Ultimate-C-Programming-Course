// Solve problem 9 for time using ‘typedef’ keyword
#include <stdio.h>

typedef struct time
{
    int ss;
    int mm;
    int hh;
} time;

void compare(time a, time b);
void compare(time a, time b)
{
    if (a.hh == b.hh)
    {
        if (a.mm == b.mm)
        {
            if (a.ss == b.ss)
            {
                printf("Both the times are same. \n");
            }
            else if (a.ss > b.ss)
            {
                printf("1st time is greater than the 2nd. \n");
            }
            else
            {
                printf("2nd time is greater than the 1st. \n");
            }
        }
        else if (a.mm > b.mm)
        {
            printf("1st time is greater than the 2nd. \n");
        }
        else
        {
            printf("2nd time is greater than the 1st. \n");
        }
    }
    else if (a.hh > b.hh)
    {
        printf("1st time is greater than the 2nd. \n");
    }
    else
    {
        printf("2nd time is greater than the 1st. \n");
    }
}

int main()
{
    time a, b;
    a.ss = 25;
    a.mm = 9;
    a.hh = 12;

    b.ss = 26;
    b.mm = 12;
    b.hh = 15;

    compare(a, b);
    return 0;
}