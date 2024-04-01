#include <stdio.h>

int factorial(int max);
int main()
{
    int max = 0, b = 0;
    int up = 0, down = 0;
    scanf("%d %d", &max, &b);

    
    up =factorial(max);
    down = factorial(b) * factorial(max - b);

    printf("%d", up / down);
    return 0;
}

int factorial(int max)
{
    if (max == 0)
        return 1;
    else
        return max * factorial(max - 1);
}