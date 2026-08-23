/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int** transpose(int** matrix, int matrixSize, int* matrixColSize,
    int* returnSize, int** returnColumnSizes) {

    int m = matrixSize;
    int n = matrixColSize[0];

    *returnSize = n;

    *returnColumnSizes = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        (*returnColumnSizes)[i] = m;
    }

    int** result = malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) {
        result[i] = malloc(m * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}