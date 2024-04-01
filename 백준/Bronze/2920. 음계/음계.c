#include <stdio.h>

int main()
{
    int a[8] = { 0 };
    int k = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        if (a[i] - a[i + 1] == 1)
            k += 1;
        else if (a[i] - a[i + 1] == -1)
            k -= 1;
    }
    if (k == -7)
        printf("ascending");
    else if (k == 7)
        printf("descending");
    else
        printf("mixed");
    return 0;
}