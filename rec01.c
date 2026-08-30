#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) return;
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;
    scanf("%d", &num);
    if (num == 0) printf("0");
    else decimalToBinary(num);
    return 0;
}
