#include<stdio.h>

int main()
{
	//층 
	int k = 0;
	//호
	int n = 0;
	int sum = 0;
	
	int T = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		int arr[14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
		scanf("%d %d", &k, &n);
		sum = n;
		if (n == 1)
			printf("1\n");
		else if (n == 2)
			printf("%d\n", (k +2));
		else
		{
			for (int m = 0; m < k; m++) {
				for (int i = 0; i < n; i++)
				{
					arr[i + 1] = arr[i] + arr[i + 1];
				}
			}
			
			printf("%d\n", arr[n-1]);
		}
	}
		


	return 0;
}