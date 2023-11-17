#include <stdio.h>
#include <math.h>

int prime_detector(int x)
{
    if (x == 0 || x == 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter integer to check whether its prime or not:  ");
    scanf("%d", &n);
    if (prime_detector(n))
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }
    return 0;
}