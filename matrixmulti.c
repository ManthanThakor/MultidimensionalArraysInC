#include <stdio.h>

#define rows1 2
#define cols1 2
#define rows2 2
#define cols2 2

void multiplyMatrix(int matrix1[rows1][cols1], int matrix2[rows2][cols2])
{
    if (cols1 != rows2)
    {
        printf("The number of columns in Matrix-1 must be equal to the number of rows in Matrix-2.\n");
        printf("Please check your matrix dimensions.\n");
        return;
    }

    int result[rows1][cols2];    // Declare the result matrix
    printf("result matrix: \n"); // Print the current result directly

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            // Initialize each result element to 0 before calculating it
            result[i][j] = 0; // This initialization is necessary to prevent garbage values
            for (int k = 0; k < cols1; k++)
            {
                // Debugging output to track calculations
                // printf("Multiplying: matrix1[i=%d][k=%d] = %d * matrix2[k=%d][j=%d] = %d\n", i, k, matrix1[i][k], k, j, matrix2[k][j]);
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            // Print the current value of the result matrix after calculating result[i][j]
            printf("%d\t", result[i][j]); // Print the current result directly
        }
        printf("\n"); // Move to the next line after finishing a row
    }
}

int main()
{
    int matrix1[rows1][cols1] = {
        {1, 2},
        {3, 4}};

    int matrix2[rows2][cols2] = {
        {5, 6},
        {7, 8}};

    multiplyMatrix(matrix1, matrix2);

    return 0;
}
