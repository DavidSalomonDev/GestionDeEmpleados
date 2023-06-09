#include "../include/Supervisor.h"
#include <string>

Supervisor::Supervisor(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo) :
        Empleado(nombre, apellido, direccion, fechaNacimiento, sexo) {
    setNombre(nombre);
    setApellido(apellido);
    setDireccion(direccion);
    setFechaNacimiento(fechaNacimiento);
    setSexo(sexo);

    cargo = "Supervisor";
    salarioTotal = 750;

    calcularISSSLaboral();
    calcularISSSPatronal();
    calcularAFPLaboral();
    calcularAFPPatronal();
    calcularISR();
}

