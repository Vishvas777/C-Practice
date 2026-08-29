#include <stdio.h>

int majorityElement(int arr[], int n) {
    int candidate = arr[0], count = 1;

    // Find candidate
    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate)
            count++;
        else {
            count--;
            if (count == 0) {
                candidate = arr[i];
                count = 1;
            }
        }
    }

    // Since it's guaranteed majority exists, return candidate
    return candidate;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}
