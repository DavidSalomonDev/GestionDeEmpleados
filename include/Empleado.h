#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

using namespace std;

class Empleado
{
public:
    Empleado(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo);

    const string &getNombre() const;
    const string &getApellido() const;
    const string &getDireccion() const;
    const string &getFechaNacimiento() const;
    const string &getEmpresa() const;
    const char &getSexo() const;
    const string &getCargo() const;
    const double &getSalarioTotal() const;
    const double &getSalarioNeto() const;

    const void mostrarInformacion() const;

    bool operator==(const Empleado &otro) const;

    const double &getIsssLaboral() const;
    const double &getIsssPatronal() const;
    const double &getAfpLaboral() const;
    const double &getAfpPatronal() const;
    const double &getIsr() const;

    void setNombre(string nombre);
    void setApellido(string apellido);
    void setDireccion(string direccion);
    void setFechaNacimiento(string fechaNacimiento);
    void setSexo(char sexo);
    void calcularISSSLaboral();
    void calcularISSSPatronal();
    void calcularAFPLaboral();
    void calcularAFPPatronal();
    void calcularISR();

protected:
    string nombre;
    string apellido;
    string direccion;
    string fechaNacimiento;
    char sexo;
    string empresa = "Bolsas y Plásticos, SA de CV";
    string cargo;
    double salarioTotal;
    double salarioNeto;
    double isssLaboral;
    double isssPatronal;
    double afpLaboral;
    double afpPatronal;
    double isr;
};

#endif
