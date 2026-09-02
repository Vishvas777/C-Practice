#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isAdditive(char *num, int start, int len1, int len2) {
    char s1[50], s2[50], sumStr[50];
    strncpy(s1, num + start, len1); s1[len1] = '\0';
    strncpy(s2, num + start + len1, len2); s2[len2] = '\0';
    long long n1 = atoll(s1), n2 = atoll(s2);
    long long sum = n1 + n2;
    sprintf(sumStr, "%lld", sum);
    int sumLen = strlen(sumStr);
    if (start + len1 + len2 + sumLen > strlen(num)) return 0;
    if (strncmp(num + start + len1 + len2, sumStr, sumLen) != 0) return 0;
    if (start + len1 + len2 + sumLen == strlen(num)) return 1;
    return isAdditive(num, start + len1, len2, sumLen);
}

int checkAdditive(char *num) {
    int n = strlen(num);
    for (int i = 1; i <= n / 2; i++) {
        for (int j = 1; j <= (n - i) / 2; j++) {
            if (isAdditive(num, 0, i, j)) return 1;
        }
    }
    return 0;
}

int main() {
    char s[100];
    scanf("%s", s);
    if (checkAdditive(s)) printf("true\n");
    else printf("false\n");
    return 0;
}
