#include <stdio.h>
#include<string.h>



int main()
{
    int a = 0;
    char b[1000][21];
    int i = 0;
    int k[1000] = { 0 };
    int j = 0;
    int m = 0;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d %s", &k[i], b[i]);
    }
    i = 0;
    
    while (j!=a)
    {
        for (int i = 0; i < k[j]; i++)
            printf("%c", b[j][m]);
        m++;
        if ( strlen(b[j]) == m) {
            m = 0;
            j++;
            printf("\n");
        }
    }
    
    return 0;

}