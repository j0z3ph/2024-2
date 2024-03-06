/**
 * @file matrix.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplos de matrices
 * @version 0.1
 * @date 2024-03-06
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main()
{
    int matrix[3][3], matrixTrans[3][3], cont = 1, determinante;

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            matrix[f][c] = cont++;
        }
    }

    // Determinante
    determinante = (matrix[0][0] * matrix[1][1] * matrix[2][2]) +
                   (matrix[0][1] * matrix[1][2] * matrix[2][0]) +
                   (matrix[0][2] * matrix[1][0] * matrix[2][1]) -
                   (matrix[2][0] * matrix[1][1] * matrix[0][2]) -
                   (matrix[2][1] * matrix[1][2] * matrix[0][0]) -
                   (matrix[2][2] * matrix[1][0] * matrix[0][1]);

    printf("%i\n", determinante);

    // Traspuesta
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            matrixTrans[c][f] = matrix[f][c];
        }
    }

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            printf("%i ", matrix[fila][columna]);
        }
        printf("\n");
    }
    printf("\n");

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            printf("%i ", matrixTrans[fila][columna]);
        }
        printf("\n");
    }

    return 0;
}
