#include <stdio.h>

int findMaxConsecutiveOnes(int nums[], int n) {
    int maxCount = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            count++;
            if (count > maxCount)
                maxCount = count;
        } else {
            count = 0;
        }
    }
    return maxCount;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("%d\n", findMaxConsecutiveOnes(nums, n));
    return 0;
}
