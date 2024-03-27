#include <stdio.h>


int main()
{
    int a = 0;
    char b[100];
    int k[100] = { 0 };
    int sum = 0;
    scanf("%d", &a);
    scanf("%s",b);
    for (int i = 0; i < a; i++)
    {
        k[i]=b[i] - 48;
        sum = sum + k[i];
    }
    


    printf("%d",sum);
    return 0;

}