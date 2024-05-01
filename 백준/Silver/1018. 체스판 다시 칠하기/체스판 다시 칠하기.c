#include<stdio.h>

int main()
{
	int n = 0, k = 0;
	int sum1=0,sum2 = 10000;
	int n1=0, n2 = 0;
	scanf("%d %d", &n, &k);
	char m[50][50];
	char a[8][8] = {'W','B','W','B' ,'W','B', 'W','B' ,
				'B','W','B','W', 'B','W', 'B','W',
				'W','B','W','B' ,'W','B', 'W','B' ,
				'B','W','B','W', 'B','W', 'B','W',
				'W','B','W','B' ,'W','B', 'W','B' ,
				'B','W','B','W', 'B','W', 'B','W',
				'W','B','W','B' ,'W','B', 'W','B' ,
				'B','W','B','W', 'B','W', 'B','W' };

	char b[8][8] = { 'B','W','B','W', 'B','W', 'B','W',
				'W','B','W','B' ,'W','B', 'W','B',
				'B','W','B','W', 'B','W', 'B','W',
				'W','B','W','B' ,'W','B', 'W','B',
				'B','W','B','W', 'B','W', 'B','W',
				'W','B','W','B' ,'W','B', 'W','B' ,
				'B','W','B','W', 'B','W', 'B','W',
				'W','B','W','B' ,'W','B', 'W','B' };

	for (int i = 0; i < n; i++)
	{
		scanf("%s", m[i]);
	}

	for (int x = 0; x < (k - 7); x++) {
		for (int h = 0; h < (n - 7); h++)
		{
			for (int mm = 0, i = 0; mm < 8; mm++, i++)
			{
				for (int nn = 0, j = 0; nn < 8; nn++, j++)
				{
					if (a[i][j] != m[mm + h][nn + x])
						sum1++;
				}
			}
			sum1 = sum1 < sum2 ? sum1 : sum2;
			sum2 = sum1;
			sum1 = 0;
		}
	}
	
	int min1 = sum2;
	sum2 = 10000;


	for (int x = 0; x < (k - 7); x++) {
		for (int h = 0; h < (n - 7); h++)
		{
			for (int mm = 0, i = 0; mm < 8; mm++, i++)
			{
				for (int nn = 0, j = 0; nn < 8; nn++, j++)
				{
					if (b[i][j] != m[mm + h][nn + x])
						sum1++;
				}
			}
			sum1 = sum1 < sum2 ? sum1 : sum2;
			sum2 = sum1;
			sum1 = 0;
		}
	}
	int min2 = sum2;
	printf("%d", min1 < min2 ? min1 : min2);


	return 0;
}