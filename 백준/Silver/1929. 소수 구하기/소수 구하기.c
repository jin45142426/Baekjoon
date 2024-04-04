#include <stdio.h>
#include <math.h>


int main()
{
    int a[1000001] = { 0 };	
    int m = 0, n = 0;
    a[1] = 1;
    scanf("%d %d", &m, &n);

    for (int i = 2; i <= sqrt(n); i++) {	// 최대값의 제곱근까지 반복
        if (a[i] == 0) {		//i가 소수이면
            for (int j = 2; i * j <= n; j++) {	// 자신을 제외한 i의 배수 제거
                a[i * j] = 1;
            }
        }
    }

    for (int i = m; i <= n; i++) {
        if (a[i] == 0) printf("%d\n", i);
    }

    return 0;
}