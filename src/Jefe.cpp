#include "../include/Jefe.h"

Jefe::Jefe(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo) :
        Empleado(nombre, apellido, direccion, fechaNacimiento, sexo) {
    setNombre(nombre);
    setApellido(apellido);
    setDireccion(direccion);
    setFechaNacimiento(fechaNacimiento);
    setSexo(sexo);

    cargo = "Jefe de área";
    salarioTotal = 1500;
}
