#include "../include/empleado.h"

using namespace std;

// Constructor de la clase Empleado
Empleado::Empleado(const string &nombre, const string &apellido, const string &cargo,
                   double salario, char sexo, const string &fechaNacimiento)
        : nombre(nombre), apellido(apellido), cargo(cargo), salario(salario),
          sexo(sexo), fechaNacimiento(fechaNacimiento) {}

// Getter para el nombre del empleado
string Empleado::getNombre() const {
    return nombre;
}

// Getter para el apellido del empleado
string Empleado::getApellido() const {
    return apellido;
}

// Getter para el cargo del empleado
string Empleado::getCargo() const {
    return cargo;
}

// Getter para el salario del empleado
double Empleado::getSalario() const {
    return salario;
}

// Getter para el sexo del empleado
char Empleado::getSexo() const {
    return sexo;
}

// Getter para la fecha de nacimiento del empleado
string Empleado::getFechaNacimiento() const {
    return fechaNacimiento;
}