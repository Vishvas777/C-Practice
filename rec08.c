#include <stdio.h>

double binomialTerm(double x, int n, int k) {
    if (k == 0) return 1;
    return ((double)(n - k + 1) / k) * binomialTerm(x, n, k - 1);
}

double series(double x, int n) {
    if (n == 0) return 1;
    return series(x, n - 1) + binomialTerm(x, n, n) * (n % 2 ? -1 : 1) * pow(x, n);
}

int main() {
    double x; int n;
    scanf("%lf %d", &x, &n);
    printf("%lf\n", series(x, n));
    return 0;
}
