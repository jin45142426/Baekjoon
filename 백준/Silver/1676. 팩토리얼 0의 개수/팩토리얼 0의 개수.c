#include<stdio.h>


int main()
{
	int a = 0;

	int sum = 0;
	int sum1 = 0;

	scanf("%d", &a);

	//0은 2와 5의 곱으로 인해 생기기 때문에 소인수분해 2와 5의 약수 개수를 구해주면 된다.
	for (int i = 1; i <= a; i++)
	{
		if (i % 2 == 0)
			sum1++;
		if (i % 25 ==0)
			sum++;
		if (i % 125 == 0)
			sum++;
		if( i % 5 == 0)
			sum++;
	}
	if (sum1 > sum)
		printf("%d", sum);
	else
		printf("%d", sum1);
	
	return 0;
}