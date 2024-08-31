// Write a program using recursion to calculate nth element of Fibonacci series

#include <stdio.h>

int Fibonacci(int);

int Fibonacci(int a)
{
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, .. a
    if (a == 1 || a == 2) {
        return (a-1);
    }

    return Fibonacci(a - 1) + Fibonacci(a - 2);
}

int main()
{
    int n;
    printf("Enter a Number:\n");
    scanf("%d", &n);

    printf("The nth element of Fibonacci series is %d\n", Fibonacci(n));

    return 0;
}