/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de paso de parametros
 * @version 0.1
 * @date 2024-03-22
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

/**
 * @brief Suma dos numeros
 *
 * @param a Numero 1
 * @param b Numero 2
 * @return int La suma
 */
int suma(int a, int b);


int sumaRef(int *a, int *b);

int main()
{
    int a = 5, b = 8;
    int res = sumaRef(&a, &b);
    //int res = suma(a, b);

    printf("Suma: %i, a: %i b: %i\n", res, a, b);
    return 0;
}

int suma(int a, int b)
{
    a = 7;
    b = 25;
    return a + b;
}

int sumaRef(int *a, int *b) {
    *a = 7;
    *b = 25;
    return *a + *b;
}