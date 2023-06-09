#include "../include/Gerente.h"
#include <string>

Gerente::Gerente(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo) :
        Empleado(nombre, apellido, direccion, fechaNacimiento, sexo) {
    setNombre(nombre);
    setApellido(apellido);
    setDireccion(direccion);
    setFechaNacimiento(fechaNacimiento);
    setSexo(sexo);

    cargo = "Gerente";
    salarioTotal = 5000;

    calcularISSSLaboral();
    calcularISSSPatronal();
    calcularAFPLaboral();
    calcularAFPPatronal();
    calcularISR();

}