// A function defined in C can call itself. This is called recursion. A function calling itself is
// also called ‘recursive’ function.
// Here I'm writing a program to find factorial!

#include <stdio.h>

int factorial(int n);

int factorial(int n)
{
    if (n == 0 || n == 1) // Base condition
    {
        return 1;
    }
    // Factorial(n) = Factorial(n-1) X n
    return factorial(n - 1) * n;
}

int main()
{
    int a;

    do
    {
        printf("Enter a Number:\n");
        scanf("%d", &a);
        if (a < 0)
        {
            printf("Please enter a positive integer!\n");
        }

    } while (a < 0); // Prompt the user to enter a non-negative integer.

    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}