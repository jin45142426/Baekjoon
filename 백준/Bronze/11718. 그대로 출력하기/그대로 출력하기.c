#include<stdio.h>
int main()
{
	char a[100][102];
	int i = 0;
	
	while(gets(a[i])!=NULL)
	{	
		i++;
	}
  
	for (int k = 0; k < i; k++)
		printf("%s\n", a[k]);

	return 0;
}