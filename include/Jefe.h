#ifndef JEFE_H
#define JEFE_H

#include <string>
#include "Empleado.h"

using namespace std;

class Jefe : public Empleado
{
public:
    Jefe(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo);
};

#endif
