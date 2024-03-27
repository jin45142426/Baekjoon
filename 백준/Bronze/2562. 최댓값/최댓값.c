#include <stdio.h>


int main()
{
    int a[9];
    int max = 0;
    int num = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
        if (max < a[i])
        {
            max = a[i];
            num = i+1;
        }

    }

    printf("%d\n%d", max, num);
    return 0;

}