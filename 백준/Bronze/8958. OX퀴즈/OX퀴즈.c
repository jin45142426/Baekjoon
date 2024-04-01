#include <stdio.h>

int main()
{
    char a[81];
    int len = 0;
    int num = 0;
    int point = 0;
    int sum = 0;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%s", a);
        len = strlen(a);
        for (int k = 0; k < len; k++)
        {
            if (a[k] == 'O')
            {
                point += 1;
                sum += point;

            }
            else if (a[k] != 'O')
                point = 0;
        }
        point = 0;
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}