#include <stdio.h>

void sum(int a, int b)
{
    printf("%d",(a+b)*(a-b));
}
int main()
{
    int a=0, b=0;
    scanf("%d %d",&a,&b);
    
    sum(a,b);
    
    return 0;
    
}