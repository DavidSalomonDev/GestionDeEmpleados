#include <string>
#include <iostream>

#include "../include/Empleado.h"

Empleado::Empleado(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo)
{
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
    this->salarioNeto = this->salarioTotal - (this->isssLaboral + this->afpLaboral + this->isr);
}

void Empleado::setNombre(string n)
{
    nombre = n;
}

void Empleado::setApellido(string a)
{
    apellido = a;
}

void Empleado::setDireccion(string d)
{
    direccion = d;
}

void Empleado::setFechaNacimiento(string f)
{
    fechaNacimiento = f;
}

void Empleado::setSexo(char s)
{
    sexo = s;
}

const void Empleado::mostrarInformacion() const
{
    cout << "Nombre completo: " << nombre << " " << apellido << endl;
    cout << "Dirección: " << direccion << endl;
    cout << "Fecha de nacimiento: " << fechaNacimiento << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Cargo: " << cargo << endl;
    cout << "Salario: " << salarioTotal << endl;
}

bool Empleado::operator==(const Empleado &otro) const
{
    return (nombre == otro.nombre && apellido == otro.apellido &&
            direccion == otro.direccion && fechaNacimiento == otro.fechaNacimiento &&
            sexo == otro.sexo);
}

const string &Empleado::getNombre() const
{
    return this->nombre;
}

const string &Empleado::getApellido() const
{
    return this->apellido;
}

const string &Empleado::getDireccion() const
{
    return this->direccion;
}

const string &Empleado::getFechaNacimiento() const
{
    return this->fechaNacimiento;
}

const string &Empleado::getEmpresa() const
{
    return this->empresa;
}

const char &Empleado::getSexo() const
{
    return this->sexo;
}

const string &Empleado::getCargo() const
{
    return this->cargo;
}

const double &Empleado::getSalarioTotal() const
{
    return this->salarioTotal;
}

const double &Empleado::getIsssLaboral() const
{
    return this->isssLaboral;
}

const double &Empleado::getIsssPatronal() const
{
    return this->isssPatronal;
}

const double &Empleado::getAfpLaboral() const
{
    return this->afpLaboral;
}

const double &Empleado::getAfpPatronal() const
{
    return this->afpPatronal;
}

const double &Empleado::getIsr() const
{
    return this->isr;
}

const double &Empleado::getSalarioNeto() const
{
    return this->salarioNeto;
}

void Empleado::calcularISSSLaboral()
{
    double monto = this->salarioTotal;
    if (monto >= 1000)
    {
        this->isssLaboral = 30.0;
    }
    this->isssLaboral = monto * 0.03;
}

void Empleado::calcularISSSPatronal()
{
    double monto = this->salarioTotal;
    if (monto >= 1000)
    {
        this->isssPatronal = 75.0;
    }

    this->isssPatronal = monto * 0.075;
}

void Empleado::calcularAFPPatronal()
{
    double monto = this->salarioTotal;
    this->afpPatronal = monto * 0.0775;
}

void Empleado::calcularAFPLaboral()
{
    double monto = this->salarioTotal;
    this->afpLaboral = monto * 0.0725;
}

void Empleado::calcularISR()
{
    double impuesto;
    double monto = this->salarioTotal - (this->isssLaboral + this->afpLaboral);
    double tramo1 = monto <= 472;
    double tramo2 = monto >= 472.01 && monto <= 895.24;
    double tramo3 = monto >= 895.25 && monto <= 2038.1;
    double tramo4 = monto >= 2038.11;
    if (tramo1)
    {
        this->isr = 0;
    }
    else if (tramo2)
    {
        impuesto = (monto - 472.0) * 0.1 + 17.67;
        this->isr = impuesto;
    }
    else if (tramo3)
    {
        impuesto = (monto - 895.24) * 0.2 + 60.0;
        this->isr = impuesto;
    }
    else if (tramo4)
    {
        impuesto = (monto - 2038.1) * 0.3 + 288.57;
        this->isr = impuesto;
    }
}
