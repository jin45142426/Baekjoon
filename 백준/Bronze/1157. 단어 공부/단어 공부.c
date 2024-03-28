#include <stdio.h>
#include<string.h>



int main()
{
    char a[1000001];
    int max[27] = { 0 };
    int same = 0;
    int m = 0;
    int l = 0;
    char b[27] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    scanf("%s", a);
    int LEN = strlen(a);
    int LEN2 = strlen(b);
    for (int i = 0; i < LEN; i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
            a[i] -= 32;
        for (int k = 0; k < LEN2; k++)
        {
            if (b[k] == a[i])
            {
                max[k]++;
                if (same < max[k])
                {
                    same = max[k];
                    l = k;
                }
                   
            }
             
        }
        
            
    }
    for (int i = 0; i < LEN2; i++)
    {
        if (same == max[i])
            m++;
    }
    if (m >= 2)
        printf("?");
    else
        printf("%c", b[l]);
    return 0;

}