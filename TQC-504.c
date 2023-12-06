#include <stdio.h>
int main() {
    int n0, n1, n2 = 0;
    scanf("%d", &n0);
    n1 = n0;
    while (1) {
        n2 += (n1 % 10);
        n1 /= 10;
        if (n1 == 0) {
            break;
        }
        n2 *= 10;
    }
    if (n0 == n2) {
        printf("Yes");
    } else {
        printf("No");
    }
}