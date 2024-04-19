#include<stdio.h>

int main()
{
	int arr[100001] = { 0 };
	int k = 0; int m = 0; int a = 0; int sum = 0;
	scanf("%d",&k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &m);
		if (m != 0) {
			arr[a] = m;
			sum += arr[a];
			a++;
		}
		else if(m==0)
		{
			sum -= arr[a - 1];
			arr[a - 1] = 0;
			a--;
			
		}
	}
	printf("%d", sum);

	return 0;
}