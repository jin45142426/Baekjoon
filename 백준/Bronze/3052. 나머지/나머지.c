#include <stdio.h>

int main()
{
    int a[10] = { 0 };
    int sum[10] = { 0 };
    int k = 10;
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum[i] = a[i] % 42;
    }
    int i = 0;
    while (1)
    {
        for (int m = i+1; m < 10; m++)
        {
            if (sum[i] == sum[m])
            {
                k--;
                sum[i] = -1;
            }
        }
        i++;
        if (i == 10)
            break;
        
    }
    
    printf("%d", k);

    return 0;
}