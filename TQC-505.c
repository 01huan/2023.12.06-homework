#include <stdio.h>
#include <math.h>
int main () {
    double a, b, c, d, e, f;
    double ans;
    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d, &e, &f);
    ans = (fabs(a)*floor(b)) + (pow(c, d)*sqrt(e)) + log10(f);
    printf("%.2f", ans);
}