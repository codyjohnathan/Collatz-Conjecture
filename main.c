#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cs50.h>

int counter = 0;

int collatz(int n)
{
    // base case
    if(n == 1)
    {
        return counter;
    }

    // Even numbers
    else if((n % 2) == 0)
    {
        collatz(n/2);
        counter++;
        return counter;
    }

    // Odd number
    else
    {
        collatz((3 * n) + 1);
        counter++;
        return counter;
    }


}

int main(void)
{
    int n;
    printf("Enter number you want to see how many steps it takes to get back to 1: \n");
    scanf("%i", &n);
    printf("%i\n", collatz(n));
}

