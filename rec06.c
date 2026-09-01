#include <stdio.h>

void generate(int n, int pos, int arr[], int sum1, int sum2) {
    if (pos == 2 * n) {
        if (sum1 == sum2) {
            for (int i = 0; i < 2 * n; i++) printf("%d", arr[i]);
            printf("\n");
        }
        return;
    }
    arr[pos] = 0;
    generate(n, pos + 1, arr, sum1 + (pos < n ? 0 : 0), sum2 + (pos >= n ? 0 : 0));
    arr[pos] = 1;
    generate(n, pos + 1, arr, sum1 + (pos < n ? 1 : 0), sum2 + (pos >= n ? 1 : 0));
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[20];
    generate(n, 0, arr, 0, 0);
    return 0;
}
