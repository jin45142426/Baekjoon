#include<stdio.h>
int main()
{
	int a = 0;
	int m[2][1000001] = { 0 };
	int k = 0;
	int z = 1;
	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &k);
		if (k >= 0)
			m[0][k] = k;
		else
			m[1][k * -1] = k;
		if (k == 0)
			z = 10;
	}

	for (int i = 1000000; i > 0; i--)
		if (m[1][i] != 0)
			printf("%d\n", m[1][i]);
	if (z == 10)
		printf("0\n");
	for (int i = 1; i <= 1000000; i++)
		if (m[0][i] != 0)
			printf("%d\n",m[0][i]);
	
	return 0;
}	
