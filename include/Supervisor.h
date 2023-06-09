#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include <string>
#include "Empleado.h"

using namespace std;

class Supervisor : public Empleado {
public:
    Supervisor(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo);
};

#endif SUPERVISOR_H
