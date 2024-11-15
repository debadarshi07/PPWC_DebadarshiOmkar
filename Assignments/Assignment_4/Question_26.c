#include <stdio.h>

void transpose(int *matrix, int *transposed, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(transposed + j * rows + i) = *(matrix + i * cols + j);
        }
    }
}

void printMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {

    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transposed[cols][rows];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    transpose((int *)matrix, (int *)transposed, rows, cols);

    printf("\nOriginal Matrix:\n");
    printMatrix((int *)matrix, rows, cols);

    printf("\nTransposed Matrix:\n");
    printMatrix((int *)transposed, cols, rows);

    return 0;
}