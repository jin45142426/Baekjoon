#include<stdio.h>

int main()
{
	char a[4][2];
	char b[][2] = { "A+","A0","A-",
				   "B+","B0","B-",
					"C+","C0","C-",
					"D+","D0","D-" };
	int i = 0;
	scanf("%s", &a);

	//string.h 헤더파일 안씀

	if (a[0][0] == b[0][0] && a[0][1] == b[0][1])
		printf("4.3");
	else if (a[0][0] == b[1][0] && a[0][1] == b[1][1])
		printf("4.0");
	else if (a[0][0] == b[2][0] && a[0][1] == b[2][1])
		printf("3.7");
	else if (a[0][0] == b[3][0] && a[0][1] == b[3][1])
		printf("3.3");
	else if (a[0][0] == b[4][0] && a[0][1] == b[4][1])
		printf("3.0");
	else if (a[0][0] == b[5][0] && a[0][1] == b[5][1])
		printf("2.7");
	else if (a[0][0] == b[6][0] && a[0][1] == b[6][1])
		printf("2.3");
	else if (a[0][0] == b[7][0] && a[0][1] == b[7][1])
		printf("2.0");
	else if (a[0][0] == b[8][0] && a[0][1] == b[8][1])
		printf("1.7");
	else if (a[0][0] == b[9][0] && a[0][1] == b[9][1])
		printf("1.3");
	else if (a[0][0] == b[10][0] && a[0][1] == b[10][1])
		printf("1.0");
	else if (a[0][0] == b[11][0] && a[0][1] == b[11][1])
		printf("0.7");
	else
		printf("0.0");


	return 0;
}