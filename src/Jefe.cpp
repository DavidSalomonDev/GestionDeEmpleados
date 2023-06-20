#include "../include/Jefe.h"

Jefe::Jefe(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo) : Empleado(nombre, apellido, direccion, fechaNacimiento, sexo)
{
    cargo = "Jefe de área";
    salarioTotal = 1500;

    setNombre(nombre);
    setApellido(apellido);
    setDireccion(direccion);
    setFechaNacimiento(fechaNacimiento);
    setSexo(sexo);

    calcularISSSLaboral();
    calcularISSSPatronal();
    calcularAFPLaboral();
    calcularAFPPatronal();
    calcularISR();
	calcularSalarioNeto();
}
