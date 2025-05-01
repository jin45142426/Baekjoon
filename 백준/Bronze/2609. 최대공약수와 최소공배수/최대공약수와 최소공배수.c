#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", gcd(a, b));
    printf("%d\n", lcm(a, b));

    return 0;
}
