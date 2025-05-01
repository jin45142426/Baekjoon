#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0)
            break;

        // 가장 큰 값을 빗변으로
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;

        // 나머지 두 변
        int sum = a * a + b * b + c * c - max * max;

        if (max * max == sum)
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}
