#include <stdio.h>

int main()
{
    int a[1000] = { 0 };
    int num = 0;
    double sum =0.0;
    double max = 0.0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
        if(max < a[i])
            max = a[i];
        
    }
    for (int i = 0; i < num; i++)
    {
        sum = sum + ((a[i] / max) * 100);
    }
    printf("%lf", sum / num);

    return 0;
}