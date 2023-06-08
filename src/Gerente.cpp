#include "../include/Gerente.h"
#include <string>

Gerente::Gerente(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo) :
        Empleado(nombre, apellido, direccion, fechaNacimiento, sexo) {
    setNombre(nombre);
    setApellido(apellido);
    setDireccion(direccion);
    setFechaNacimiento(fechaNacimiento);
    setSexo(sexo);
}

const string &Gerente::getCargo() const {
    return cargo;
}

const double &Gerente::getSalario() const {
    return salario;
}