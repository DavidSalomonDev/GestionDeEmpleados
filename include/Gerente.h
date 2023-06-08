#ifndef GERENTE_H
#define GERENTE_H

#include <string>
#include "Empleado.h"

using namespace std;

class Gerente: public Empleado{
public:
Gerente(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo);
    const string &getCargo() const;
    const double &getSalario() const;

private:
    string cargo = "Gerente";
    double salario = 5000.0;
};


#endif
