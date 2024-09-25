// Write a structure capable of storing date. Write a function to compare those
// dates.
#include <stdio.h>

typedef struct date
{
    int dd;
    int mm;
    int yyyy;
} date;

void compare(date a, date b);
void compare(date a, date b)
{
    if (a.yyyy == b.yyyy)
    {
        if (a.mm == b.mm)
        {
            if (a.dd == b.dd)
            {
                printf("Both the dates are same. \n");
            }
            else if (a.dd > b.dd)
            {
                printf("1st date is greater than the 2nd. \n");
            }
            else
            {
                printf("2nd date is greater than the 1st. \n");
            }
        }
        else if (a.mm > b.mm)
        {
            printf("1st date is greater than the 2nd. \n");
        }
        else
        {
            printf("2nd date is greater than the 1st. \n");
        }
    }
    else if (a.yyyy > b.yyyy)
    {
        printf("1st date is greater than the 2nd. \n");
    }
    else
    {
        printf("2nd date is greater than the 1st. \n");
    }
}

int main()
{
    date a, b;
    a.dd = 25;
    a.mm = 9;
    a.yyyy = 2024;

    b.dd = 26;
    b.mm = 12;
    b.yyyy = 2023;

    compare(a, b);
    return 0;
}