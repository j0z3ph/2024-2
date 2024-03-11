/**
 * @file inversa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2024-03-11
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrixT[3][3], determinante;

    // Traspuesta
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            matrixT[c][f] = matrix[f][c];
        }
    }

    // Determinante
    determinante = (matrix[0][0] * matrix[1][1] * matrix[2][2]) + (matrix[0][1] * matrix[1][2] * matrix[2][0]) + (matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0]) - (matrix[0][0] * matrix[1][2] * matrix[2][1]) - (matrix[0][1] * matrix[1][0] * matrix[2][2]);

    printf("%i\n", determinante);

    return 0;

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%i ", matrix[f][c]);
        }
        printf("\n");
    }

    printf("\n");

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%i ", matrixT[f][c]);
        }
        printf("\n");
    }

    return 0;
}
