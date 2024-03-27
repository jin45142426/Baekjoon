#include<stdio.h>

int main()
{
	char a[100];
	int i = 0;
	scanf("%s", &a);

	//string.h 헤더파일 안씀

	while (a[i]!=NULL)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
		else
		{
			a[i] -= 32;
		}
		i++;
	}
	printf("%s",a);
	

	return 0;
}