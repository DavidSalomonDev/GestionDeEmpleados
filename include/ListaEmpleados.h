#ifndef LISTAEMPLEADOS_H
#define LISTAEMPLEADOS_H

#include <vector>
#include "Empleado.h"

using namespace std;

class ListaEmpleados {
public:
    void addEmpleado(const Empleado &empleado);

    void addEmpleadosFromFile(const string& nombreArchivo);

    void getEmpleadoByInstance(const Empleado &empleado);

    void getEmpleadoByFullName(string nombre, string apellido);

    void getEmpleados();

    void getEmpleadosByRole();

    int size();

private:
    vector<Empleado> empleados;
};


#endif
