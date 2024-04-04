#include <stdio.h>
#include <math.h>

int main()
{
	int N = 0, M = 0;
	int sum = 0, MAX = 0;;
	int NUMBER[100] = { 0 };
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &NUMBER[i]);
	}
	for(int i =0; i< N;i++)
		for(int j = 0;j<N;j++)
			for (int k = 0; k < N; k++)
			{
				if (i == j)
					break;
				if (i == k)
					continue;
				if (j == k)
					continue;
				sum = NUMBER[i] + NUMBER[j] + NUMBER[k];
				
				if (sum > MAX && sum <=M)
					MAX = sum;
				sum = 0;
			}
	printf("%d", MAX);
	return 0;
}