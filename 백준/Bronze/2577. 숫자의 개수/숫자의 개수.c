#include <stdio.h>

int main()
{
    int sum = 0;
    int a = 0, b = 0, c = 0;
    int k[10] = { 0 };
    scanf("%d %d %d", &a, &b, &c);

    sum = a * b * c;
    int m = 0;
    while (sum >0)
    {
        m = sum % 10;
        k[m]++;
        
        sum /= 10;

    }
    for (int i = 0; i < 10; i++)
        printf("%d\n", k[i]);
    return 0;

}