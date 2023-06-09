#ifndef GERENTE_H
#define GERENTE_H

#include <string>
#include "Empleado.h"

using namespace std;

class Gerente : public Empleado {
public:
    Gerente(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo);
};

#endif
