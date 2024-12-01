#include <stdio.h>

int main() {
	int row1, column1, row2, column2;

	printf("Enter the row of first matrix: ");
	scanf("%d", &row1);
	printf("Enter the column of first matrix: ");
	scanf("%d", &column1);

	printf("Enter the row of second matrix: ");
	scanf("%d", &row2);
	printf("Enter the column of second matrix: ");
	scanf("%d", &column2);

	if (row1 == 0 || row2 == 0 || column1 == 0 || column2 == 0) {
		printf("Row or Column can not be zero.");
	}

	if (row1 != row2 && column1 != column2) {
		printf("To add 2 matrices you need to have same dimension of two matrices.");
	} else {

		int matrix1[row1][column1];
		int matrix2[row2][column2];
		int answer[row1][column1];

		// Taking input for matrices
		printf("Enter the elements of first matrix.\n");
		for(int i = 0; i < row1; i++) {
			for(int j = 0; j < column1; j++) {
				printf("Enter the [%d][%d] the element: ", i, j);
				scanf("%d",&(matrix1[i][j]));
			}
		}

		printf("Enter the elements of second matrix.\n");
		for(int i = 0; i < row2; i++) {
			for(int j = 0; j < column2; j++) {
				printf("Enter the [%d][%d] the element: ", i, j);
				scanf("%d",&(matrix2[i][j]));
			}
		}

		// Calculating the sum
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < column1; j++) {
				answer[i][j] = matrix1[i][j] + matrix2[i][j];
			}
		}

		// Printing the matrices
		printf("Matrix 1 : \n");
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < column1; j++) {
				printf("%d ",matrix1[i][j]);
			}
			printf("\n");
		}

		printf("\n");

		printf("Matrix 2: \n");
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < column1; j++) {
				printf("%d ",matrix2[i][j]);
			}
			printf("\n");
		}

		printf("\n");

		printf("Resultant matrix is: \n");
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < column1; j++) {
				printf("%d ",answer[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}