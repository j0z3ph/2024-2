/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2024-03-26
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "agenda.hpp"
#include "tools.hpp"

using namespace std;
using namespace agenda;

int main()
{
    int sel;
    string opciones[] = {"Agregar contacto", "Llamar contacto", "Actualizar contacto", "Salir"};
    sel = showMenu(4, opciones, "Agenda de Contactos");
    

    return 0;
}
