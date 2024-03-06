/**
 * @file inversa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que permite calcular la inversa de una matriz de 3x3
 * @version 0.1
 * @date 2024-03-05
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int determinante;
    int matrixT[3][3];

    determinante = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    printf("%i\n", determinante);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixT[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", matrixT[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}
