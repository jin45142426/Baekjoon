#include <stdio.h>

void sum(long long int a, long long int b)
{
    printf("%lld", (a + b) * (a - b));
}
int main()
{
    long long int a = 0, b = 0;
    scanf("%lld %lld", &a, &b);

    sum(a, b);

    return 0;

}