#ifndef LISTAEMPLEADOS_H
#define LISTAEMPLEADOS_H

#include <vector>
#include "Empleado.h"
//#include "../include/Gerente.h"

using namespace std;

class ListaEmpleados {
public:
    void agregarEmpleado(const Empleado& empleado);
    //void agregarEmpleado(const Gerente& gerente);
    void mostrarEmpleados();

private:
    vector<Empleado> empleados;
};


#endif
