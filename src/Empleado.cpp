#include <string>
#include <iostream>

#include "../include/Empleado.h"


Empleado::Empleado(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo) {
    setNombre(nombre);
    setApellido(apellido);
    setDireccion(direccion);
    setFechaNacimiento(fechaNacimiento);
    setSexo(sexo);
}

void Empleado::setNombre(string n) {
    nombre = n;
}

void Empleado::setApellido(string a) {
    apellido = a;
}

void Empleado::setDireccion(string d) {
    direccion = d;
}

void Empleado::setFechaNacimiento(string f) {
    fechaNacimiento = f;
}

void Empleado::setSexo(char s) {
    sexo = s;
}

void Empleado::mostrarInformacion() {
    cout << "Nombre completo: " << nombre << " " << apellido << endl;
    cout << "Dirección: " << direccion << endl;
    cout << "Fecha de nacimiento: " << fechaNacimiento << endl;
    cout << "Sexo: " << sexo << endl;
}

const string &Empleado::getNombre() const {
    return nombre;
}

const string &Empleado::getApellido() const {
    return apellido;
}

const string &Empleado::getDireccion() const {
    return direccion;
}

const string &Empleado::getFechaNacimiento() const {
    return fechaNacimiento;
}

const string &Empleado::getEmpresa() const {
    return empresa;
}

char Empleado::getSexo() const {
    return sexo;
}
