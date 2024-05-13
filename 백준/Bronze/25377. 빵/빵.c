#include<stdio.h>


int main()
{
	int A[101] = { 0 };
	int B[101] = { 0 };
	int N = 0;

	scanf("%d", &N);
	int k = 0;
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &A[i], &B[i]);
		if (A[i] > B[i])
			k++;
		else
			if (B[i] > B[i + 1])
				max = B[i];
			else
				max = B[i + 1];
	}
	


	if (k == N)
		printf("-1");
	else
		printf("%d",max);
	return 0;

}
