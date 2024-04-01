#include <stdio.h>
#include<string.h>

int main()
{
    char a[10000];
    int b = 0;
    int i = 0,sum=0;
    while (1)
    {
        scanf("%s",a);
        if (a[0] == 48)
            return 0;
        b = strlen(a);
        b -= 1;
        while (1)
        {
            if (i == b && a[i] == a[b - i])
             {
                 printf("yes\n");
                 break;
             }
            else if ( a[i] != a[b-i])
            {
                printf("no\n");
                break;
            }
            
            i++;

        }
        i = 0;
    }

    return 0;
}