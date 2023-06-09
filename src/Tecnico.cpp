#include "../include/Tecnico.h"

Tecnico::Tecnico(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo) :
        Empleado(nombre, apellido, direccion, fechaNacimiento, sexo) {
    setNombre(nombre);
    setApellido(apellido);
    setDireccion(direccion);
    setFechaNacimiento(fechaNacimiento);
    setSexo(sexo);

    cargo = "Técnico";
    salarioTotal = 350;

    calcularISSSLaboral();
    calcularISSSPatronal();
    calcularAFPLaboral();
    calcularAFPPatronal();
    calcularISR();
}
