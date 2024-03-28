#include <stdio.h>

int main()
{
    int a = 0;
    int j = 1;

    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < a-j; k++)
        {
            printf(" ");
        }
        for (int k = 0; k < j;k++)
            printf("*");
        printf("\n");
        j++;
    }
    return 0;

}