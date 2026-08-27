#include <stdio.h>
#include <string.h>

void shortestWord(char str[], char result[]) {
    int len = strlen(str);
    int minLen = len + 1;
    int start = 0, end = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int wordLen = i - start;
            if (wordLen > 0 && wordLen < minLen) {
                minLen = wordLen;
                end = i;
            }
            start = i + 1;
        }
    }

    strncpy(result, str + (end - minLen), minLen);
    result[minLen] = '\0';
}

int main() {
    char str[200], result[50];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';  // remove newline

    shortestWord(str, result);
    printf("Shortest word: %s\n", result);

    return 0;
}
