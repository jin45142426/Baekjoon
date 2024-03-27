#include <stdio.h>
#include <math.h>

int main()
{
    int a[5] = { 0 };
    int sum = 0;

    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    sum = (pow(a[0], 2) + pow(a[1], 2) + pow(a[2], 2) + pow(a[3], 2) + pow(a[4], 2));
    sum %= 10;

    printf("%d", sum);
    return 0;

}