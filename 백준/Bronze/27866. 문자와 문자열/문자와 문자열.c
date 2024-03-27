#include<stdio.h>

int main()
{
	char a[1000];
	int i = 0;
	scanf("%s", &a);
	scanf("%d", &i);

	printf("%c", a[i-1]);

	return 0;
}