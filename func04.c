#include <stdio.h>

void printBoundary(int mat[][100], int n, int m) {
    // top row
    for (int j = 0; j < m; j++)
        printf("%d ", mat[0][j]);

    // right column
    for (int i = 1; i < n; i++)
        printf("%d ", mat[i][m - 1]);

    // bottom row (if more than 1 row)
    if (n > 1) {
        for (int j = m - 2; j >= 0; j--)
            printf("%d ", mat[n - 1][j]);
    }

    // left column (if more than 1 column)
    if (m > 1) {
        for (int i = n - 2; i > 0; i--)
            printf("%d ", mat[i][0]);
    }
}

int main() {
    int mat[100][100];
    int n, m;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Boundary traversal: ");
    printBoundary(mat, n, m);

    return 0;
}
