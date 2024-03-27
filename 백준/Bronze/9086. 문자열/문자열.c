#include<stdio.h>
#include<string.h>
int main()
{
	char a[10][1000];
	int b = 0;
	scanf("%d", &b);

	for (int i = 0; i < b; i++)
		scanf("%s", &a[i]);

	for (int i = 0; i < b; i++)
	{
		printf("%c%c\n",a[i][0], a[i][strlen(a[i])-1]);
	}


	return 0;
}