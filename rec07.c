#include <stdio.h>

double term(double x, int n) {
    if (n == 0) return 1;
    return (x / n) * term(x, n - 1);
}

double expSeries(double x, int n) {
    if (n == 0) return 1;
    return term(x, n) + expSeries(x, n - 1);
}

int main() {
    double x; int n;
    scanf("%lf %d", &x, &n);
    printf("%lf\n", expSeries(x, n));
    return 0;
}
