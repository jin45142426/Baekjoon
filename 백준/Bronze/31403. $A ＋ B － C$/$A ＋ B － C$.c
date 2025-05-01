#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char a[1000], b[1000], c[1000];

	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);

	printf("%d\n", atoi(a) + atoi(b) - atoi(c));
	printf("%d", atoi(strcat(a, b)) - atoi(c));
	return 0;
}