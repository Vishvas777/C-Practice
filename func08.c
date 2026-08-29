#include <stdio.h>

void findLeaders(int nums[], int n) {
    int leaders[n];
    int count = 0;
    int maxRight = nums[n - 1];

    leaders[count++] = nums[n - 1];  // last element is always a leader

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] > maxRight) {
            leaders[count++] = nums[i];
            maxRight = nums[i];
        }
    }

    // print in original order
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);
        int nums[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }
        findLeaders(nums, n);
    }

    return 0;
}
