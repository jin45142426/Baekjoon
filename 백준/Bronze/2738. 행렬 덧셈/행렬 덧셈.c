#include<stdio.h>

int main()
{
	int a [100][100] = { 0 };
	int b[100][100] = { 0 };
	int m = 0, n = 0;

	scanf("%d %d", &m, &n);
	
	for (int i = 0; i < m; i++)
	{
		for(int j =0; j<n;j++)
			scanf("%d", &a[i][j]);
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
			a[i][j] = a[i][j] + b[i][j];
		}
			
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	return 0;
}