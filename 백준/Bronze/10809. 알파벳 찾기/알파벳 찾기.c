#include <stdio.h>
#include<string.h>
int main()
{
    int num[26] = { 0 };
    int num2[26] = { 0 };
    char a[100];
    scanf("%s", a);

    int k = strlen(a);

    for (int i = 0; i <26; i++)
    {
        num[i] = -1;
        for (int j = 0; j < k; j++)
        {
            if (a[j] == 97 + i)
            {
                num2[i] += 1;
                if (num2[i] >= 2)
                    break;
                num[i] = j;
            }
        }
    }
    
    for (int i = 0; i < 26; i++)
        printf("%d ", num[i]);
    return 0;
}