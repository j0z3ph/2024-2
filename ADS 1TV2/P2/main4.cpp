/**
 * @file main3.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief  WHILE
 * @version 0.1
 * @date 2024-03-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include<iostream>

using namespace std;

int main()
{
    int cont=101;// 1. Variable con un valor inicial
    do 
    {
        cout << "Hola\n";
        cont<<=1;// 3. Mecanimos para variar la variable para que eventualmente la condicion sea falsa
    }while(cont < 101);// 2. Condicion
    
    return 0;
}
