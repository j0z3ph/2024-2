/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2024-03-11
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>

using namespace std;

int main()
{
    int matrix[3][3], matrixT[3][3], matrixA[3][3], determinate, cont = 0;
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            matrix[fila][columna] = ++cont;
        }
    }

    // Adjunta
    matrixA[0][0] = +1 * ((matrix[1][1] * matrix[2][2]) - (matrix[2][1] * matrix[1][2]));
    matrixA[0][1] = -1 * ((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]));
    matrixA[0][2] = +1 * ((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]));
    matrixA[1][0] = -1 * ((matrix[0][1] * matrix[2][2]) - (matrix[0][2] * matrix[2][1]));
    matrixA[1][1] = +1 * ((matrix[0][0] * matrix[2][2]) - (matrix[2][0] * matrix[0][2]));
    matrixA[1][2] = -1 * ((matrix[0][0] * matrix[2][1]) - (matrix[0][1] * matrix[2][0]));
    matrixA[2][0] = +1 * ((matrix[0][1] * matrix[1][2]) - (matrix[1][1] * matrix[0][2]));
    matrixA[2][1] = -1 * ((matrix[0][0] * matrix[1][2]) - (matrix[1][0] * matrix[0][2]));
    matrixA[2][2] = +1 * ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));


    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << matrixA[fila][columna] << " ";
        }
        cout << endl;
    }

    return 0;


    // Determinante
    determinate = matrix[0][0] * matrix[1][1] * matrix[2][2] +
                  matrix[1][0] * matrix[2][1] * matrix[0][2] +
                  matrix[2][0] * matrix[0][1] * matrix[1][2] -
                  matrix[2][0] * matrix[1][1] * matrix[0][2] -
                  matrix[0][0] * matrix[2][1] * matrix[1][2] -
                  matrix[1][0] * matrix[0][1] * matrix[2][2];

    cout << determinate << endl;

    // Transponer
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            matrixT[columna][fila] = matrix[fila][columna];
        }
    }

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << matrixT[fila][columna] << " ";
        }
        cout << endl;
    }

    return 0;
}
