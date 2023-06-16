#ifndef TECNICO_H
#define TECNICO_H

#include <string>
#include "Empleado.h"

using namespace std;

class Tecnico : public Empleado
{
public:
    Tecnico(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo);
};

#endif
