#include <stdio.h>

int main()
{
	int N = 0;
	int check = 0;
	int t = 0;
	int swap = 0;
	scanf("%d", &N);
	while (1)
	{
		t++;
		swap = t;
		while (t != 0) {
			if (t % 1000 == 666)
			{
				check++;
				break;
			}
			else
				t /= 10;
		}
		t = swap;
		if (check == N)
			break;
	}
	printf("%d", t);
	return 0;

}