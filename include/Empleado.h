#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

using namespace std;

class Empleado {
public:
    Empleado(string nombre, string apellido, string direccion, string fechaNacimiento, char sexo);

    const string &getNombre() const;

    const string &getApellido() const;

    const string &getDireccion() const;

    const string &getFechaNacimiento() const;

    const string &getEmpresa() const;

    char getSexo() const;


    void setNombre(string nombre);
    void setApellido(string apellido);
    void setDireccion(string direccion);
    void setFechaNacimiento(string fechaNacimiento);
    void setSexo(char sexo);
    void mostrarInformacion();

private:
    string nombre;
    string apellido;
    string direccion;
    string fechaNacimiento;
    char sexo;
    string empresa = "Bolsas y Plásticos, SA de CV";


};

#endif
