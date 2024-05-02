#include<stdio.h>

int main()
{
	double avg = 0;
	int most[2][4001] = { 0 };
	int num = 0;
	int n = 0;
	int min = 4000;
	int max = -4000;
	scanf("%d",& num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &n);
		//범위
		min = min > n ? n : min;
		max = max < n ? n : max;
		//평균
		avg = avg + n;
		//빈도율
		if(n>=0)
			most[1][n] +=1;
		else if (n < 0)
		{
			n *= -1;
			most[0][n]+=1;
			n *= -1;
		}
	}
	//평균
	int avg1 = 0;
	if(avg >=0)
		avg1 =avg / num+0.5;
	else 
		avg1 = avg / num - 0.5;
	printf("%d\n", avg1);
	//중앙값
	num = num / 2+1;
	int mm = 0;
	for (int i = 0; i < 2; i++)
	{ 
		if (i == 0)
		{
			for (int j = 4000; j>0; j--)
			{
				if (most[i][j] > 0)
					mm += most[i][j];
				if (mm >= num)
				{
					printf("%d\n", j*-1);
					break;
				}

			}
		}
		if (i == 1)
		{
			for (int j = 0; j < 4001; j++)
			{
				if (most[i][j] > 0)
					mm += most[i][j];
				if (mm >= num)
				{
					printf("%d\n", j);
					break;
				}

			}
		}
		
		if (mm >= num)
			break;
	}

	int max1 = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4001; j++)
		{
			if(max1 < most[i][j])
				max1 = most[i][j];
		}
	}
	//최빈값
	int sum = 0;
	int a = 0;
	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			for (int j = 4000; j >= 0; j--)
			{
				if (max1 == most[i][j])
				{
					sum++;
					a = j * -1;
					if (sum == 2)
					{
						printf("%d\n", j*-1);
						//범위
						if (num == 1)
							printf("0");
						else
							printf("%d\n", max - min);
						return 0;
					}
				}
			}
		}
		else if (i == 1)
		{
			for (int j = 0; j < 4001; j++)
			{
				if (max1 == most[i][j])
				{
					sum++;
					a = j;
					if (sum == 2)
					{
						printf("%d\n", j);
						//범위
						if (num == 1)
							printf("0");
						else
							printf("%d\n", max - min);
						return 0;
					}
				}
			}
		}
	}
	
	printf("%d\n", a);
	if (num == 1)
		printf("0");
	else
		printf("%d\n", max - min);
	return 0;

	return 0;
	
}