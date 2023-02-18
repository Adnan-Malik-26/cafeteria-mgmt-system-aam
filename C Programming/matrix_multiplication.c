#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrices cannot be multiplied.");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
