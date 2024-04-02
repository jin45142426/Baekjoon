#include<stdio.h>
int main()
{
	int a = 0;
	int k[100] = { 0 };
	int sum = 0;
	int b = 0;
	int ma = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &k[i]);
		for (int m = 1; m <= k[i]; m++)
		{
			if (k[i] % m ==0)
				sum++;
			if (sum > 2)
				break;
			if (sum == 2 && m == k[i])
				b++;
			
		}
		sum = 0;
	}
	printf("%d", b);
	return 0;

}