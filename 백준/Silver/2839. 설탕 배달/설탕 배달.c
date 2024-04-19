#include<stdio.h>


int main()
{
	int n = 0; 
	int i = 0; 
	scanf("%d", &n);

	while (1)
	{
		if (n % 5 == 0)
		{
			i += n / 5;
			break;
		}
		n -= 3;
		i++;
		if (n <= 0)
			break;
	}
	if (n < 0)
		printf("-1");
	else
		printf("%d", i);
	return 0;
}