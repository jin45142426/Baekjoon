#include <stdio.h>

int main()
{

    long long int number = 0;

	long long int MAX = 0;

	int j = 1;

	scanf("%u", &number);

	while (1) 
	{
        MAX +=j;
		if (MAX > number)
			break;

		j++;
	}

	printf("%d\n", j-1);
    return 0;
}