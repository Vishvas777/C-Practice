#include <stdio.h>

void rotate90CounterClockwise(int mat[][100], int n, int m, int res[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            res[m - j - 1][i] = mat[i][j];
        }
    }
}

int main() {
    int mat[100][100], res[100][100];
    int n, m;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    rotate90CounterClockwise(mat, n, m, res);

    printf("Rotated matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}