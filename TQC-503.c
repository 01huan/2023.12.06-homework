#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c, i;
    scanf("%d\n%d", &a, &b);
    double ans;
    for (i=1; i<a; i++) {
        c = sqrt(i);
        ans = c + 0.0;
        if (ans == sqrt(i)) {
            printf("%.0lf\n", pow(c, b));
        }
    }
}