#include <stdio.h>
#include <string.h>

char mostFrequentChar(char str[]) {
    int freq[256] = {0};   // frequency array
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++;
    }

    int max = 0;
    char result;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = (char)i;
        }
    }
    return result;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char ans = mostFrequentChar(str);
    printf("Most frequent character